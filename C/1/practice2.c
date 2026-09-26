#include <stdio.h> //標準入出力ライブラリ（stdio.h）の読み込み

int main() // メイン処理の開始
{
	int member;	// 整数型:人数（member）を作成
	float diameter, radian, area, pie = 3.14159265359; // 実数型:直径（diameter）、角度（radian）、面積（area）、円周率（pie）=3.14159265359を作成

	printf("人数："); // 人数の入力を求める
	scanf("%d", &member); // 入力値を格納

	printf("直径："); // 直径の入力を求める
	scanf("%f", &diameter); // 入力値を格納

	float radius = diameter / 2; // 実数型:半径（radius）=（式：直径÷2）を作成
	radian = 360.0 / member; // 角度を計算（360.0/人数）
	area = radius * radius * pie / member; // 面積を計算（半径*半径*円周率/人数）

	printf("角度：%.6f\n", radian); // 角度を表示
	printf("面積：%f\n", area);	// 面積を表示

	return 0; // 正常終了（コード0）を返してプログラムを終了
}