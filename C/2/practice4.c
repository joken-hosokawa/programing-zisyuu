/* No.29	Name細川春希
演習4「乙女の理想」
Programming/2/practice4.c
*/
#include <stdio.h>

int main()
{
	float height, weight, bmi; // 身長、体重、BMI

	printf( "身長(cm) 体重(kg)：" );
	scanf( "%f%f", &height, &weight ); // 身長、体重の入力受付

	/*<?>*/;
	bmi = weight / (height * 0.01) / (height * 0.01); // BMIの算出

	if( bmi < 18.5 ) // 標準未満の場合
		printf( "低体重\n" );
	else if( bmi < 25.0 )
		printf( "標準体重\n" );
	else // 標準を超える場合
		printf( "肥満\n" );

	return 0;
}