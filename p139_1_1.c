//p139練習問題1-1
#include <stdio.h>

int main( void )
{
	int a, b, c, wa, sa;

	a = 35;
	b = 88;
	c = 154;

	wa = a + b + c;
	sa = a - b - c;

	printf( "a+b+c=%d\n", wa);
	printf( "a-b-c=%d\n", sa);

	return 0;
}

/*実行結果
  a+b+c=277
  a-b-c=-207
*/