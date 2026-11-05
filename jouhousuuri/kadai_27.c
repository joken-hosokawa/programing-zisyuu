//課題27
#include <stdio.h>
int main()
{
	int gyou, i, j;

	scanf( "%d", &gyou );

	for( i = 1; i <= gyou; i++ ) {
		for( j = 1; j <= gyou; j++ ) {
			if( i == j || i + j == gyou + 1 ) //i=jまたは、i+jがgyou+1のとき
				printf( "■" );
			else
				printf( "□" );
		}
		printf( "\n" );
	}
	return 0;
}

/*
5
■□□□■
□■□■□
□□■□□
□■□■□
■□□□■
*/
