/* No.29	Name細川 春希
演習7「完全数」
Programming/3/practice6.c
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int numeric, sum;

	printf( "数値：" );
	scanf( "%d" , &numeric); // 数値の入力受付

	sum = 1; // 最小の約数をセット
	for( int n = 2; numeric > n; n++ ) { // その他の約数を順に調べる
		if (numeric % n == 0) // nで割り切れる場合
			sum += n; // nを約数と判断し、合計値に足し込む
	}

	if( numeric == sum )
		printf( "完全数\n" );
	else
		printf( "非完全数\n" );

	return 0;
}
