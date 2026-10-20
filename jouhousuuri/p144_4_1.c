//p144練習問題4-1
#include <stdio.h>

int main( void )
{
	int a, b, wa, sa ,seki ,shou;

	printf( "値1を入力：" );
	scanf( "%d", &a );
	printf( "値2を入力：" );
	scanf( "%d", &b );

	wa = a + b ;
	sa = a - b ;
	seki = a * b ;
	shou = a / b ;


	printf( "a+b=%d\n", wa);
	printf( "a-b=%d\n", sa);
	printf( "a*b=%d\n", seki);
	printf( "a/b=%d\n", shou);

	return 0;
}


/*実行結果
1
3
a+b=4
a-b=-2
a*b=3
a/b=0
*/