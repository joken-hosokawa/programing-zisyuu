//課題23
#include <stdio.h>
int main()
{
	int gyou, retu, i, j;

	scanf( "%d %d", &gyou, &retu );

	for( i = 1; i <= gyou; i++ ) {
		for( j = 1; j <= retu; j++ ) {
			printf( "(%d,%d)", i, j );
		}
		printf( "\n" );
	}
	return 0;
}