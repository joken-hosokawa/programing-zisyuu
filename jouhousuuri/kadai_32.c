//課題32
#include <stdio.h>

int main()
{
	int sum = 0, cnt = 1;

	while( cnt <= 100 ) {
		sum += cnt;
		cnt += 3;
	}

	printf( "%d", sum );
	return 0;
}

/*
1717
*/