/* No.29	Name細川春希
演習6「和風月名」
Programming/2/practice6.c
*/
#include <stdio.h>

int main()
{
	int month;

	printf( "月入力：" );
	scanf( "%d", &month );

	switch( month ) {
	case 1: // 1月の場合
		printf( "睦月\n" );
		break;
	case 2: // 2月の場合
		printf( "如月\n" );
		break;
	case 3: // 3月の場合
		printf( "弥生\n" );
		break;
	case 4: // 4月の場合
		printf( "卯月\n" );
		break;
	case 5: // 5月の場合
		printf( "皐月\n" );
		break;
	case 6: // 6月の場合
		printf( "水無月\n" );
		break;
	case 7: // 7月の場合
		printf( "文月\n" );
		break;
	case 8: // 8月の場合
		printf( "葉月\n" );
		break;
	case 9: // 9月の場合
		printf( "長月\n" );
		break;
	case 10: // 10月の場合
		printf( "神無月\n" );
		break;
	case 11: // 11月の場合
		printf( "霜月\n" );
		break;
	case 12: // 12月の場合
		printf( "師走\n" );
		break;
	default: // 上記以外の場合
		printf( "入力エラー\n" );
	}

	return 0;
}