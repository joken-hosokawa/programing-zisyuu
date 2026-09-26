#include <stdio.h>

int main()
{
	int price, sum;

	sum = 0;
	do {
		printf( "金額：" );
		scanf( "%d", &price );
		sum += price;
	} while( price != 0 );

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