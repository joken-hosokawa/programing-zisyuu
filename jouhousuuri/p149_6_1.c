//p149 練習問題6-1
#include <stdio.h>

int main( void )
{
	float a;

	printf( "金額を入力 >" );
	scanf( "%f", &a );

	if( a >= 5000 ) {
		printf( "%.0f円", a * 0.8 );
	} else if ( a >= 3000 ){
		printf( "%.0f円", a * 0.9 );
	} else {
		printf( "%.0f円", a );
	}

	return 0;
}
/*実行結果
金額を入力 >5000
4000円
金額を入力 >3000
2700円
金額を入力 >777
777円
*/