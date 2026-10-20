////p141練習問題2-1
//#include <stdio.h>
//
//int main( void ) {
//	float a, b, c, d;
//
//	a = 35.2;
//	b = 85.4;
//
//	c = (a * a) + (b * 2);
//	d = (a * a) - (b * 2);
//
//	printf( "a^2+b^2=%f\n", c);
//	printf( "a^2-b^2=%f\n", d);
//	
//	return 0;
//}
//
///*実行結果
//a^2+b^2=1409.840088
//a^2-b^2=1068.239990
//*/

//p141練習問題2-1
#include <stdio.h>

int main( void )
{
	float a, b, c, d;

	a = 35.2;
	b = 85.4;

	c = (a * a) + (b * 2);
	d = (a * a) - (b * 2);

	printf( "a^2+b^2=%10.2f\n", c);
	printf( "a^2-b^2=%10.2f\n", d);

	return 0;
}

/*実行結果
a^2+b^2=   1409.84
a^2-b^2=   1068.24
*/