//課題39
#include <stdio.h>

int main()
{
	int num[100];
	int i;

	for( i = 0; i < 100; i++ ) {
		num[i] = i + 1;
	}

	for( i = 0; i < 100; i++ ) {
		if( num[i] % 7 == 0 ) {
			printf( "%d\n", num[i] );
		}
	}

	return 0;
}

/*
7
14
21
28
35
42
49
56
63
70
77
84
91
98
*/