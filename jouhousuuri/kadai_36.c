#include <stdio.h>

void main()
{
	int d[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int m;

	printf( "何月ですか>" );
	scanf( "%d", &m );
	printf( "%d月の日数は,%d\n", m, d[m + 1] );

	return 0;
}

/*
何月ですか>1
1月の日数は,31
*/