//課題24
#include <stdio.h>
int main()
{
	int gyou, retu, i, j;

	scanf( "%d %d", &gyou, &retu );

	for( i = 1; i <= gyou; i++ ) {
		for( j = 1; j <= retu; j++ ) {
			if( j % 2 != 0 ) {
				printf( "■" );
			} else {
				printf( "□" );
			}
		}
		printf( "\n" );
	}
	return 0;
}