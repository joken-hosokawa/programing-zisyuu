//p147練習問題5-1
#include <stdio.h>

int main( void )
{
	char a;

	printf( "文字を入力 >" );
	scanf( "%c", &a );

	if( a == 'c' ) {
		printf( "OK!" );
	} else {
		printf( "NG!" );
	}

	return 0;
}
/*実行結果
文字を入力 >c
OK!
*/