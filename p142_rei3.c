//p142例題3
#include <stdio.h>

int main( void )
{
	char a, b, c;

	//a = 'N'; //文字定数
	//b = 'H';
	//c = '3';

	printf( "a b c >" );
	scanf( "%c %c %c", &a, &b, &c );

	printf( "%c %c %c\n", a, b, c);//文字型（1文字）に変換
	printf( "%d %d %d\n", a, b, c);//10進数
	printf( "%x %x %x\n", a, b, c);//16進数

	return 0;
}

/*実行結果
N H 3
78 72 51
4e 48 33
*/