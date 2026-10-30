//p149 練習問題6-2
#include <stdio.h>

int main( void )
{
	int a, b;

	printf( "点数を入力 >" );
	scanf( "%d %d", &a, &b );

	if( a >= 70 && b >= 70 ) {
		printf( "合格" );
	} else if ( a >= 70 || b >= 70 ){
		printf( "科目合格" );
	} else {
		printf( "不合格" );
	}

	return 0;
}
/*実行結果
点数を入力 >70 70
合格
点数を入力 >70 50
科目合格
点数を入力 >34 46
不合格
*/