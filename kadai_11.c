//課題11
#include <stdio.h>

int main( void )
{
	float k;

	printf( "k >" );
	scanf( "%f", &k );

	if( k >= 5000 )
		printf( "%.0f", k * 0.9 );
	
	else printf( "%f",k );

	return 0;
}
/*実行結果
k >5000
4500
*/