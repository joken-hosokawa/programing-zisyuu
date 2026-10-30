//p144練習問題4-2
#include <stdio.h>

int main( void )
{
	int a, b, menseki;

	printf( "縦の長さを入力：" );
	scanf( "%d", &a );
	printf( "横の長さを入力：" );
	scanf( "%d", &b );

	menseki = a * b;

	printf( "面積：%d\n", menseki);
	
	return 0;
}


/*実行結果
縦の長さを入力：3
横の長さを入力：4
面積：12
*/