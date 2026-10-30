//課題13
#include <stdio.h>

int main( void )
{
	int x;

	printf( "x >" );
	scanf( "%d", &x );

	if( x < 0 ) {
		printf( "負の数" );
	} else if( x == 0 ) {
		printf( "0" );
	} else {
		printf( "正の数" );
	}

	return 0;
}
/*実行結果
x >0
0
*/