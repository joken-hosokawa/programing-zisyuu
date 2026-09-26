/* No.29	Name細川春希
演習5「うるう年判定」
Programming/2/practice5.c
*/
#include <stdio.h>

int main()
{
	int year;

	printf( "西暦年入力：" );
	scanf( "%d",&year ); // 西暦年の入力受付

	if( (year % 4 == 0 && year % 100 != 0 ) || ( year % 400 == 0) ) // うるう年の条件を満たす場合
		printf( "うるう年\n" );
	else
		printf( "うるう年ではない\n" );

	return 0;
}