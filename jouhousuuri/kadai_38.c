#include <stdio.h>

int main()
{
	int c1, c2, k, a;
	int dat[10] = { 9,2,3,7,4,1,8,9,5,6 };
	
	c1 = 0;
	c2 = 0;

	for( k = 0; k < 10; k++ ) {
		
		a = dat[k];
		if( a >= 2 ) {
			a -= 2;
		}

		if( a == 1 ) {
			c1++;
		}
		if( a == 2 ) {
			c2++;
		}
	}
	printf( "偶数の個数=%d\n",c1 );
	printf( "奇数の個数=%d\n",c2 );

	return 0;
}

/*
合計=655 平均=72.777779

*/