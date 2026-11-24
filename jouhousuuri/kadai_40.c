//課題40
#include <stdio.h>

int main()
{
	int ten[5];
	int pass = 0, i;

	for( i = 0; i < 5; i++ ) {
		printf( "%d番目の点数 > ", i + 1 );
		scanf( "%d", &ten[i] );
	}

	printf( "合格点 > " );
	scanf( "%d", &pass );

	for( i = 0; i < 5; i++ ) {
		if( ten[i] >= pass )
			pass++;
	}

	printf( "合格人数 = %d人\n", pass );

	return 0;
}
