//p144練習問題4-3
#include <stdio.h>

int main( void )
{
	char a;

	printf( "文字を入力：" );
	scanf( "%c", &a );

	printf( "10進数：%d\n", a);
	printf( "16進数：%x\n", a);

	return 0;
}


/*実行結果
文字を入力：A
10進数：65
16進数：41
*/