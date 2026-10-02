/* No.29	Name細川 春希
演習4「素数判定」
Programming/3/practice4.c
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int numeric;
	bool prime = true; // 素数である(真:true)か否(偽:false)か

	printf( "数値：" );
	scanf( "%d", &numeric ); // 数値の入力受付

	for( int n = 2; n <= numeric - 1 ; n++ )
		if( numeric % n == 0 ) { // nで割り切れる場合
			prime = false; // 素数でないことが判明
			break;
		}

	if( prime == true )
		printf( "素数\n" );
	else
		printf( "素数ではない\n" );

	return 0;
}
