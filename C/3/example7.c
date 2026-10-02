#include <stdio.h>

#define SIZE 99 //表のサイズ(行数·列数) ※定数マクロ

int main()
{
	int row, col;//行、列

	/*列ラベルの表示 */
	printf( "  |" );
	for( int n = 1; n <= SIZE; n++ )//nは当該for文でのみ有効
		printf( "%3d", n );
	printf( "\n" );

	/*横線の表示 */
	printf( "--+" );
	for( int i = 0; i <= SIZE ; i++ )//iは当該for文でのみ有効
		printf( "---" );
	printf( "\n" );

	/*表内部の計算·表示 */
	for( row = 1; row <= SIZE; row++ ) { // 9行分の繰り返し
		printf( "%2d|", row );// 行ラベルの表示
		for( col = 1; col <= SIZE; col++ ) // 9列分の繰り返し
			printf( "%3d", row * col); //row の段を一つずつ表示
		printf( "\n" );
	}

	return 0;
}