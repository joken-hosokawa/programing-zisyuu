//課題28
#include <stdio.h>
int main()
{
	int gyou, i, j;

	scanf( "%d", &gyou );

	for( i = gyou; i >= 1; i-- ) {
		for( j = 1; j <= i; j++ ) {
			printf( "*" );
		}
		printf( "\n" );
	}
	return 0;
}