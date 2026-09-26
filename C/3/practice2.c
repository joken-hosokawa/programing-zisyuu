/* No.29	Name細川 春希
演習2「最年長・最年少・平均年齢」
Programming/3/practice2.c
*/
#include <stdio.h>

int main()
{
	int age, max, min, count;
	float sum, average;

	printf( "年齢：" );
	scanf( "%d", &age ); // 一人目の年齢の入力受付
	max = min = age; // 暫定の最大値および最小値をセット
	sum = count = 0; // 合計とカウント数を初期化
	while( age != 0 ) {
		if( age > 0 ) {
			sum += age; // 年齢を合計に足し込む
			count++; //	カウント数を1増やす
			if( age >= max )
				max = age; // 暫定最大値を更新
			if( age <= min )
				min = age; // 暫定最小値を更新
		}
		printf( "年齢：" );
		scanf( "%d", &age ); // 次の年齢の入力受付
	}
	average = sum / count; // 平均年齢を算出

	printf( "最年長：%d\n最年少：%d\n平均年齢：%.1f\n", max, min, average );

	return 0;
}

/*
24
36
18
57
-3
72
0
*/