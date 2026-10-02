/* No.29	Name細川 春希
演習6「完全数」
Programming/3/practice6.c
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int numeric, sum;

	printf( "数値：" );
	scanf( /*<?>*/, &numeric ); // 数値の入力受付

	sum = /*<?>*/; // 最小の約数をセット
	for( int n = 2; /*<?>*/; n++ ) { // その他の約数を順に調べる
		if( /*<?>*/ == 0 ) // nで割り切れる場合
			/*<?>*/; // nを約数と判断し、合計値に足し込む
	}

	if( /*<?>*/ )
		printf( "完全数\n" );
	else
		printf( "非完全数\n" );

	return 0;
}