/* No.29	Name細川 春希
演習1「映画鑑賞料金」
Programming/2/practice1.c
*/
#include <stdio.h>

int main()
{
	int age; // 年齢

	printf( "年齢入力：" );
	scanf( "%d",&age ); // 年齢の入力受付

	if( age >= 18 ) // 一般の場合
		printf( "1800円\n" );
	else if( age >= 12 ) // 学生の場合
		printf( "1000円\n" );
	else // おこちゃまの場合
		printf( "500円\n" );

	return 0;
}