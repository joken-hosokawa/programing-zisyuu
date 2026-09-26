#include <stdio.h>

int main()
{
	int range, m, n;

	printf( "範囲　倍数：" );
	scanf( "%d %d", &range, &m);
	
	n = 1;
	while( n <= range ) {
		if( n % m == 0 ) { //nがmの倍数だったら
			printf( "\n" );
			n++;
			continue;
		}
		printf( "%d ", n );
		n++;
	}

	return 0;
}