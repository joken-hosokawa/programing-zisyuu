/* No.29	Name 細川 春希
演習2「学割・シニア割引判定」
Programming/2/practice2.c
*/
#include <stdio.h>

int main()
{
	int age; // 年齢

	printf( "年齢入力：" );
	scanf( "%d",&age ); // 年齢の入力受付

	if( age <= 18 || age >=65 ) // 学生またはシニアの場合
		printf( "割引対象\n" );
	else
		printf( "通常料金\n" );

	return 0;
}