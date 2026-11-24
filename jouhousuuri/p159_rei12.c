//P159例題12
#include <stdio.h>

int main()
{
	int i, s, a[5];

	for( i = 0; i < 5; i++ ) {
		scanf( "%d", &a[i] ); //配列a[i]に入力
	}
	
	s = 0;

	for( i = 4; i >= 0; i-- ) {
		s += a[i]; //s=s+a
		printf( "a[%d]=%d\n", i, a[i] );
	}

	printf( "s=%d\n", s );

	return 0;
}

/*
43
66
13
27
11
a[4]=11
a[3]=27
a[2]=13
a[1]=66
a[0]=43
s=160
*/