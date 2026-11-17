//P155 練習問題9-1
#include <stdio.h>

int main()
{
	int sum = 0, n = 0;

	while( n < 10 ) {
		sum += n;
		n += 1;
	}

	printf( "%d", sum );
	return 0;
}

/*
45
*/