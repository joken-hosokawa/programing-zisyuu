//課題30
#include <stdio.h>

int main()
{
	int n = 0, is = 0;
	
	while( n <= 14 ) {
		n += 1;
		is = is + n;
	}

	printf( "%d", is );
	return 0;
}

/*
120
*/