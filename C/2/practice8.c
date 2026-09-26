/*
* 【注意】UTF-8では動作しない場合があります。その場合は、UTF-8 with BOMで保存してください。右下から変更できます。
*
* Blue Archive 生徒募集シミュレーター v1.1.1
* -ゲーム内の生徒募集をC言語で再現-
*
* 【用語解説】
* Blue Archive（ブルーアーカイブ）：スマホゲームの一つ
* 生徒：キャラクター
* 生徒募集：ガチャ
* 星：キャラクターのレアリティ
* ピックアップ：特定のキャラクターの排出率が上がる
* 確定保証：10回募集では10回目は星2以上が確定で排出される
*
* 【大まかな仕組み】
* 乱数で0～999を生成し、実際のゲームの確率（星3（ピックアップ：0.7 + 通常：%2.3）%3　星2：%18.5　星1：%78.5%）
* に基づいて、～6をピックアップ、～29を星3、～214を星2、～999を星1キャラクターとする
* 星をが確定したら、データベースに登録されているキャラクターの中から乱数（乱数÷人数のあまり）でキャラクターを選択して出力する
*
* 確定保証を再現するため、10回目の処理は別に行っている
* 
* 選択に対する処理はswitch文を使用し、内部での乱数に基づく処理はif文を使用している
*
* 実際の色を再現するために、ANSIエスケープコードを使用した　※ターミナルの設定によって色が変わる場合がある
* #define（マクロ）、乱数（<stdlib.h>、<time.h>、srandなど）を拡張知識として使用した
*
* 【使い方】
* 1：1回募集　2：10回募集　3：やめておく　を選択する
*/


#include <stdio.h> // 標準入出力ライブラリ（stdio.h）の読み込み
#include <stdlib.h> // 標準ライブラリ（stdlib.h）の読み込み（srandを使用するために使用）
#include <time.h> // 時間ライブラリ（time.h）の読み込み（timeを使用するために使用）

#define COLOR_RESET   "\033[0m" // 初期値の色　これがないと、色が変わったままになる
#define COLOR_3STAR   "\033[1;35m" // ピンク/紫（星3）　※目安HEX：#FF55FF
#define COLOR_2STAR   "\033[1;33m" // 黄色/ゴールド（星2）　※目安HEX：#FFFF55
#define COLOR_1STAR   "\033[1;36m" // 水色/ブルー（星1）　※目安HEX：#55FFFF

// キャラクターデータベース（数が多いので、初期にいたのキャラクターのみ）
char* PICKUP_CHAR = "ヒフミ(Pick Up!)";
char* STARS3_CHARS[] = {
	"アル", "イオリ", "イズミ", "エイミ", "カリン", "サヤ", "シュン", "シロコ",
	"スミレ", "ツルギ", "ネル", "ハルナ", "ヒキ", "ヒナ", "ホシノ", "マキ"
};
#define NUM_3STARS 16 // 星3キャラクターの人数

char* STARS2_CHARS[] = {
	"アイリ", "アカリ", "アヤネ", "ウタハ", "カヨコ", "ジュンコ", "セリカ", "チセ",
	"ツバキ", "ハナエ", "ハスミ", "ハレ", "フウカ", "ムツキ", "ユウカ"
};
#define NUM_2STARS 15 // 星2キャラクターの人数

char* STARS1_CHARS[] = {
	"アスナ", "コタマ", "コトリ", "シミコ", "ジュリ", "スズミ",
	"セリナ", "チナツ", "フィーナ", "ハルカ", "ヨシミ"
};
#define NUM_1STARS 11 // 星1キャラクターの人数

int main() {
	// プログラムの先頭で使う変数をまとめて宣言
	int choice; // ユーザーの選択を格納する変数
	int rand_val; // 乱数を格納する変数
	char* char_name; // キャラクター名を格納する変数

	srand((unsigned int)time(NULL)); // 乱数を生成

	printf("======================================================\n");
	printf("         Blue Archive - 生徒募集シミュレーター        \n");
	printf("                  [  Powered by C  ]                  \n");
	printf("======================================================\n");
	printf("1. 1回募集 (青輝石 120個)\n");
	printf("2. 10回募集 (青輝石 1200個 / 星2以上1枚確定)\n");
	printf("3. やめておく\n");
	printf("------------------------------------------------------\n");
	printf("メニュー番号を選択してください: ");

	scanf("%d", &choice);

	switch (choice) { // ユーザーの選択に応じて処理を分岐 switch文を使用
	case 1: // 1回募集の処理
		printf("\n----- 1回募集結果 -----\n");
		rand_val = rand() % 1000; // 0〜999の乱数を生成

		if (rand_val < 7) { // 0〜6の範囲（0.7%）の場合、星3ピックアップキャラクターを出力
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, PICKUP_CHAR);
		}
		else if (rand_val < (7 + 23)) { // 7〜29の範囲（2.3%）の場合、星3キャラクターを出力
			char_name = STARS3_CHARS[rand() % NUM_3STARS]; // 乱数をもとに星3キャラクターを選択
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, char_name); // 確定したキャラクターを出力
		}
		else if (rand_val < (7 + 23 + 185)) { // 30〜214の範囲（18.5%）の場合、星2キャラクターを出力
			char_name = STARS2_CHARS[rand() % NUM_2STARS];  // 乱数をもとに星2キャラクターを選択
			printf(COLOR_2STAR "★ ★    %s\n" COLOR_RESET, char_name); // 確定したキャラクターを出力
		}
		else { // 215〜999の範囲（78.5%）の場合、星1キャラクターを出力 elseで可能
			char_name = STARS1_CHARS[rand() % NUM_1STARS]; // 乱数をもとに星1キャラクターを選択
			printf(COLOR_1STAR "★      %s\n" COLOR_RESET, char_name); // 確定したキャラクターを出力
		}
		printf("-----------------------\n\n");
		break;

	case 2: // 10回募集の処理　上記の1回募集の処理を9回繰り返し、10回目は星2以上確定枠のみの処理を行う
		printf("\n----- 10回募集結果 -----\n");

		// 【1回目】 (通常枠の処理)
		rand_val = rand() % 1000;
		if (rand_val < 7) {
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, PICKUP_CHAR);
		}
		else if (rand_val < (7 + 23)) {
			char_name = STARS3_CHARS[rand() % NUM_3STARS];
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, char_name);
		}
		else if (rand_val < (7 + 23 + 185)) {
			char_name = STARS2_CHARS[rand() % NUM_2STARS];
			printf(COLOR_2STAR "★ ★    %s\n" COLOR_RESET, char_name);
		}
		else {
			char_name = STARS1_CHARS[rand() % NUM_1STARS];
			printf(COLOR_1STAR "★      %s\n" COLOR_RESET, char_name);
		}

		// 【2回目】 (通常枠の処理)
		rand_val = rand() % 1000;
		if (rand_val < 7) {
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, PICKUP_CHAR);
		}
		else if (rand_val < (7 + 23)) {
			char_name = STARS3_CHARS[rand() % NUM_3STARS];
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, char_name);
		}
		else if (rand_val < (7 + 23 + 185)) {
			char_name = STARS2_CHARS[rand() % NUM_2STARS];
			printf(COLOR_2STAR "★ ★    %s\n" COLOR_RESET, char_name);
		}
		else {
			char_name = STARS1_CHARS[rand() % NUM_1STARS];
			printf(COLOR_1STAR "★      %s\n" COLOR_RESET, char_name);
		}

		// 【3回目】 (通常枠の処理)
		rand_val = rand() % 1000;
		if (rand_val < 7) {
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, PICKUP_CHAR);
		}
		else if (rand_val < (7 + 23)) {
			char_name = STARS3_CHARS[rand() % NUM_3STARS];
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, char_name);
		}
		else if (rand_val < (7 + 23 + 185)) {
			char_name = STARS2_CHARS[rand() % NUM_2STARS];
			printf(COLOR_2STAR "★ ★    %s\n" COLOR_RESET, char_name);
		}
		else {
			char_name = STARS1_CHARS[rand() % NUM_1STARS];
			printf(COLOR_1STAR "★      %s\n" COLOR_RESET, char_name);
		}

		// 【4回目】 (通常枠の処理)
		rand_val = rand() % 1000;
		if (rand_val < 7) {
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, PICKUP_CHAR);
		}
		else if (rand_val < (7 + 23)) {
			char_name = STARS3_CHARS[rand() % NUM_3STARS];
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, char_name);
		}
		else if (rand_val < (7 + 23 + 185)) {
			char_name = STARS2_CHARS[rand() % NUM_2STARS];
			printf(COLOR_2STAR "★ ★    %s\n" COLOR_RESET, char_name);
		}
		else {
			char_name = STARS1_CHARS[rand() % NUM_1STARS];
			printf(COLOR_1STAR "★      %s\n" COLOR_RESET, char_name);
		}

		// 【5回目】 (通常枠の処理)
		rand_val = rand() % 1000;
		if (rand_val < 7) {
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, PICKUP_CHAR);
		}
		else if (rand_val < (7 + 23)) {
			char_name = STARS3_CHARS[rand() % NUM_3STARS];
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, char_name);
		}
		else if (rand_val < (7 + 23 + 185)) {
			char_name = STARS2_CHARS[rand() % NUM_2STARS];
			printf(COLOR_2STAR "★ ★    %s\n" COLOR_RESET, char_name);
		}
		else {
			char_name = STARS1_CHARS[rand() % NUM_1STARS];
			printf(COLOR_1STAR "★      %s\n" COLOR_RESET, char_name);
		}

		// 【6回目】 (通常枠の処理)
		rand_val = rand() % 1000;
		if (rand_val < 7) {
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, PICKUP_CHAR);
		}
		else if (rand_val < (7 + 23)) {
			char_name = STARS3_CHARS[rand() % NUM_3STARS];
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, char_name);
		}
		else if (rand_val < (7 + 23 + 185)) {
			char_name = STARS2_CHARS[rand() % NUM_2STARS];
			printf(COLOR_2STAR "★ ★    %s\n" COLOR_RESET, char_name);
		}
		else {
			char_name = STARS1_CHARS[rand() % NUM_1STARS];
			printf(COLOR_1STAR "★      %s\n" COLOR_RESET, char_name);
		}

		// 【7回目】 (通常枠の処理)
		rand_val = rand() % 1000;
		if (rand_val < 7) {
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, PICKUP_CHAR);
		}
		else if (rand_val < (7 + 23)) {
			char_name = STARS3_CHARS[rand() % NUM_3STARS];
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, char_name);
		}
		else if (rand_val < (7 + 23 + 185)) {
			char_name = STARS2_CHARS[rand() % NUM_2STARS];
			printf(COLOR_2STAR "★ ★    %s\n" COLOR_RESET, char_name);
		}
		else {
			char_name = STARS1_CHARS[rand() % NUM_1STARS];
			printf(COLOR_1STAR "★      %s\n" COLOR_RESET, char_name);
		}

		// 【8回目】 (通常枠の処理)
		rand_val = rand() % 1000;
		if (rand_val < 7) {
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, PICKUP_CHAR);
		}
		else if (rand_val < (7 + 23)) {
			char_name = STARS3_CHARS[rand() % NUM_3STARS];
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, char_name);
		}
		else if (rand_val < (7 + 23 + 185)) {
			char_name = STARS2_CHARS[rand() % NUM_2STARS];
			printf(COLOR_2STAR "★ ★    %s\n" COLOR_RESET, char_name);
		}
		else {
			char_name = STARS1_CHARS[rand() % NUM_1STARS];
			printf(COLOR_1STAR "★      %s\n" COLOR_RESET, char_name);
		}

		// 【9回目】 (通常枠の処理)
		rand_val = rand() % 1000;
		if (rand_val < 7) {
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, PICKUP_CHAR);
		}
		else if (rand_val < (7 + 23)) {
			char_name = STARS3_CHARS[rand() % NUM_3STARS];
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, char_name);
		}
		else if (rand_val < (7 + 23 + 185)) {
			char_name = STARS2_CHARS[rand() % NUM_2STARS];
			printf(COLOR_2STAR "★ ★    %s\n" COLOR_RESET, char_name);
		}
		else {
			char_name = STARS1_CHARS[rand() % NUM_1STARS];
			printf(COLOR_1STAR "★      %s\n" COLOR_RESET, char_name);
		}

		// 【10回目】 (星2以上確定枠の処理)
		// 星1の処理がなく、残りはすべて星2以上になる
		rand_val = rand() % 1000;
		if (rand_val < 7) {
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, PICKUP_CHAR);
		}
		else if (rand_val < (7 + 23)) {
			char_name = STARS3_CHARS[rand() % NUM_3STARS];
			printf(COLOR_3STAR "★ ★ ★  %s\n" COLOR_RESET, char_name);
		}
		else {
			char_name = STARS2_CHARS[rand() % NUM_2STARS];
			printf(COLOR_2STAR "★ ★    %s [確定枠]\n" COLOR_RESET, char_name);
		}

		printf("------------------------\n\n");
		break;

	case 3: // プログラムを終了する
		printf("\nアロナ「またの機会にお待ちしてます！」\n");
		break;

	default: // 無効な入力された場合のエラーメッセージ
		printf("無効な入力です。1、2、3の中から数字を選択し、半角で入力してください。\n" COLOR_RESET);
	}

	return 0; // 正常終了（コード0）を返してプログラムを終了
}
