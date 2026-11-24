//P155 練習問題9-2
#include <stdio.h>

int main()
{
	char a;

	while( 1 ){
		scanf( "%c", &a );
		if( a == 'x' )
			break;
		printf( "%c", a );
	}

	return 0;
}

/*
a
a
b
b
c
c

*/