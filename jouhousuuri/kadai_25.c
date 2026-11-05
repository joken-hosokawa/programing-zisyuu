//課題25
#include <stdio.h>
int main()
{
	int gyou, retu, i, j;

	scanf( "%d %d", &gyou, &retu );

	for( i = 1; i <= gyou; i++ ) {
		for( j = 1; j <= retu; j++ ) {
			if( ( j + i ) % 2 == 0 ) //j+iが偶数のとき
				printf( "■" );
			else //j+iが奇数のとき
				printf( "□" );
		}
		printf( "\n" );
	}
	return 0;
}

/*
5 5
■□■□■
□■□■□
■□■□■
□■□■□
■□■□■
*/
