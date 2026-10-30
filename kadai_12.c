//課題12
#include <stdio.h>

int main( void )
{
	int s,a;

	printf( "s >" );
	scanf( "%d", &s );

	if( s >= 0 )
		a = s;
	else a = s * -1;
	
	printf( "%d",a );
	
	return 0;
}
/*実行結果
s >-1
1
*/