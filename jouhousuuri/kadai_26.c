//課題26
#include <stdio.h>
int main()
{
	int gyou, i, j;

	scanf( "%d", &gyou );

	for( i = 1; i <= gyou; i++ ) {
		for( j = 1; j <= gyou; j++ ) {
			if( i == j ) {
				printf( "■" );
			} else {
				printf( "□" );
			}
		}
		printf( "\n" );
	}
	return 0;
}