/* No.29	Name細川 春希
演習3「コラッツ予想」
Programming/3/practice3.c
*/
#include <stdio.h>

int main()
{
	int numeric;

	printf( "整数：" );
	scanf( "%d", &numeric ); // 数値の入力受付

	while( numeric != 1 ) {
		printf( "%d ", numeric ); // 操作前の数値を表示
		if( numeric % 2 != 0 )
			numeric = 3 * numeric + 1;
		else
			numeric = numeric / 2;
	}
	printf( "%d\n", numeric ); // 最後の操作後の数値を表示

	return 0;
}
