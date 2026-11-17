//課題31
#include <stdio.h>

int main()
{
	int n = 1, is = 0;

	do{
		is = is + n;
		n += 1;
	} while( n <= 15 );

	printf( "%d", is );
	return 0;
}

/*
120
*/