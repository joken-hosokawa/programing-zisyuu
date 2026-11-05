//課題24
#include <stdio.h>
int main()
{
	int gyou, retu, i, j;

	scanf( "%d %d", &gyou, &retu );

	for( i = 1; i <= gyou; i++ ) {
		for( j = 1; j <= retu; j++ ) {
			if( j % 2 == 0 ) //偶数のとき
				printf( "□" );
			else //奇数のとき
				printf( "■" );
		}
		printf( "\n" );
	}
	return 0;
}

/*
5 5
■□■□■
■□■□■
■□■□■
■□■□■
■□■□■
*/
