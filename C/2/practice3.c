/* No.29	Name細川春希
演習3「遊園地のアトラクション制限」
Programming/2/practice3.c
*/
#include <stdio.h>

int main()
{
	int age; // 年齢
	float height; // 身長

	printf( "年齢：" );
	scanf( "%d",&age ); // 年齢の入力受付
	printf( "身長[cm]：" );
	scanf( "%f",&height ); // 身長の入力受付

	if( age >= 10 && height >= 120 ) {// 身長と年齢の制限を満たす場合
		printf( "乗車可能\n" );
	} else {
		printf( "乗車できません\n" );
	}

	return 0;
}