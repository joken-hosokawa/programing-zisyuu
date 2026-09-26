#include <stdio.h>

int main()
{
	int range, m, n;

	printf( "範囲　倍数：" );
	scanf( "%d %d", &range, &m);

	for( n = 1;n <= range;n++ )
		if( n % m == 0 )
			printf( "\n" );
		else
			printf( "%d ", n );
	return 0;
}