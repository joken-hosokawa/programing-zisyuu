#include <stdio.h> //標準入出力ライブラリ（stdio.h）の読み込み

int main() // メイン処理の開始
{
	int price, member; // 整数型:料金（price）、人数（member）を作成

	printf("人数："); // 人数の入力を求める
	scanf("%d", &member); // 入力値を格納

	printf("金額："); // 金額の入力を求める
	scanf("%d", &price); // 入力値を格納

	int price_per = price / member; // 整数型:一人当たりの料金（price_per）=（式：料金÷人数）を作成
	printf("勝者：%d円\n", priceper); // 勝者（=一人当たりの料金）を表示
	printf("敗者：%d円\n", priceper + price % member); // 敗者の金額を計算（式：一人当たりの料金+（料金÷人数のあまり））して表示

	return 0; // 正常終了（コード0）を返してプログラムを終了
}