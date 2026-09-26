#include<stdio.h>

int main()
{
	int score;

	printf( "点数入力 << " );
	scanf( "%d", &score );

	if( score >= 60 )
		printf( "合格\n" );
	else
		printf( "不合格\n" );

	return 0;
}