#include <stdio.h>

int main()
{
	int price, sum;

	sum = 0;
	printf( "金額:" );
	scanf( "%d", &price );
	while( price != 0 ) { // priceが0じゃないときに繰り返す
		sum += price;
		printf( "金額：" );
		scanf( "%d", &price );
	}

	printf( "合計：%d\n", sum );

	return 0;
}

/*
123
456
789
-10
0
*/