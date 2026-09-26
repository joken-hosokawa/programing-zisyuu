/* No.29	Name細川 春希
演習1「点数入力チェック」
Programming/3/practice1.c
*/
#include <stdio.h>

int main()
{
	int score; // 点数

	do {
		printf( "点数：" );
		scanf( "%d",&score ); // 点数入力受付
	} while( score < 0 || score > 1000 ); // 適正でない点数の場合、繰り返しを継続

	printf( "%d点を登録します\n", score );

	return 0;
}