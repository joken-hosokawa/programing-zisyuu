#include<stdio.h>

int main()
{
	int scoreA, scoreB;

	printf( "点数入力 << " );
	scanf( "%d %d", &scoreA, &scoreB );

	if( scoreA >= 0 && scoreA <= 100 && scoreB >= 0 && scoreB <= 100 ) {
		if( scoreA >= 60 && scoreB >= 60 )
			printf( "合格\n" );
		else if( scoreA >= 60 || scoreB >=
				 60 )
			printf( "科目合格\n" );
		else
			printf( "不合格\n" );
	} else
		printf( "入力エラー\n" );

	return 0;
}