//p148 例題6
#include <stdio.h>

int main( void )
{
	int a;

	printf( "a >" );
	scanf( "%d", &a );

	if( a >= 70 )  //70点以上
		printf( "合格\n" );
	else if( a >= 40 )  //(69点以下)40点以上
		printf( "再試験\n" );
	else  //39点以下
		printf( "不合格\n" );
	
	return 0;
}
/*実行結果
a >70
合格
*/