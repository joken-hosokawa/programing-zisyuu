#include<stdio.h>

int main()
{
	int score;

	printf( "点数入力 << " );
	scanf( "%d", &score );

	//if( score > 100 )
	//	printf( "入力エラー\n" );
	//else if( score >= 80 )
	//	printf( "A\n" );
	//else if( score >= 60 )
	//	printf( "B\n" );
	//else if( score >= 30 )
	//	printf( "C\n" );
	//else if( score >= 0 )
	//	printf( "D\n" );
	//else
	//	printf( "入力エラー\n" );

	if( score >= 0 && score <= 100 ) { //scoreが0以上かつ100以下の場合
		if( score >= 80 )
			printf( "A\n" );
		else if( score >= 60 )
			printf( "B\n" );
		else if( score >= 30 )
			printf( "C\n" );
		else
			printf( "D\n" );
	}	else //そうではない場合
		printf( "入力エラー\n" );

	return 0;
}