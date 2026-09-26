#include <stdio.h>
#include <stdbool.h>

int main()
{
	int price, sum;

	sum = 0;
	do {
		printf( "金額：" );
		scanf( "%d", &price );
		if( price == 0 )
			break;
		sum += price;
	} while( true );

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