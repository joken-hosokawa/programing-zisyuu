#include <stdio.h> //標準入出力ライブラリ（stdio.h）の読み込み

int main() // メイン処理の開始
{
	float height, weight, bmi; // 実数型:身長（height）、体重（weight）、BMI（bmi）を作成

	printf("身長(cm)："); // 身長の入力を求める
	scanf("%f", &height); // 入力値を格納

	printf("体重(kg)："); // 体重の入力を求める
	scanf("%f", &weight); // 入力値を格納

	bmi = weight / (height * 0.01) / (height * 0.01); // BMIを計算（体重/身長×0.01/身長×0.01）

	printf("BMI：%.1f\n", bmi); // BMIを表示

	return 0; // 正常終了（コード0）を返してプログラムを終了
}