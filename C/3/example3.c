#include <stdio.h>
#include <stdbool.h>

int main()
{
	int price, sum, max;

	sum = 0;
	max = 0;
	do {
		printf( "金額：" );
		scanf( "%d", &price );
		if( price == 0 )
			break;
		sum += price;
		if( max <= price )
			max = price;
	} while( true );

	printf( "合計：%d\n最高額：%d\n", sum, max );

	return 0;
}