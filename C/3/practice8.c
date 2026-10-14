/* No.29	Name細川 春希
演習7応用「図形描画：3種のトライアングル」
Programming/3/practice7.c
*/
#include <stdio.h>

int main()
{
	int kind, size; // 図形の種類、サイズ
	char material; // 素材となる文字

	printf( "素材 種類 サイズ：" );
	scanf( " %c %d %d", &material, &kind, &size); // 素材、種類、サイズの入力受付

	switch( kind ) { // 種類の値によって切り替える
	case 1:
		for( int y = 0; y < size; y++ ) { // 縦(Y方向・行数)の繰り返し
			for( int x = 0; x <= y; x++ ) // 横(X方向・列数)の繰り返し
				printf( "%c", material );
			printf( "\n" );
		}
		break;
	case 2:
		for( int y = 0; y < size; y++ ) { // 縦(Y方向・行数)の繰り返し
			for( int x = 0; x < size - y; x++ ) // 横(X方向・列数)の繰り返し
				printf( "%c", material );
			printf("\n");
		}
		break;
	case 3:
		for( int y = 0; y < size; y++ ) { // 縦(Y方向・行数)の繰り返し
			for( int x = 0; x < size - 1 - y; x++ ) // 横(X方向・列数)の繰り返し
				printf( " " ); // 空白文字を出力
			for( int x = 0; x < 2 * y + 1; x++ ) // 横(X方向・列数)の繰り返し
				printf( "%c", material );
			printf("\n");
		}
		break;
	}

	return 0;
}