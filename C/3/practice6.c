/* No.29	Name細川 春希
演習6「素因数分解」
Programming/3/practice6.c
*/
#include <stdio.h>

int main()
{
	int numeric, prime;

	printf( "数値：" );
	scanf( "%d", &numeric ); // 数値の入力受付

	prime = 2; // 最小の素数をセット
	while( prime != numeric ) { // 素因数分解処理の継続条件を指定
		while( numeric % prime == 0 ) { // primeで割り切れる場合
			printf( "%d ", prime ); // primeは素因数として表示
			break;
		}
		prime++;
	}
	printf( "%d\n", prime ); // 最後の素因数を表示

	return 0;
}
