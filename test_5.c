#include <stdio.h>

int main( void )
{
	int a, b, c, d = 100;

	a = 10;
	b = 6;
	c = 20;

	a = b + c;
	b = a * d; //上記のa = b + c;で26に更新されるため、a = 10ではなく、a = 26で計算する。
	c = d % 3;
	d = 7 + d * 7;

	printf( "a = %d\n", a );
	printf( "b = %d\n", b );
	printf( "c = %d\n", c );
	printf( "d = %d\n", d );

	return 0;
}
