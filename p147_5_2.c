//p147練習問題5-2
#include <stdio.h>

int main( void )
{
	int a;

	printf( "整数を入力 >" );
	scanf( "%d", &a );

	if( a % 3 == 0 ) {
		printf( "3の倍数です。" );
	} else {
		printf( "3の倍数ではありません。" );
	}

	return 0;
}
/*実行結果
整数を入力 >69
3の倍数です。
*/