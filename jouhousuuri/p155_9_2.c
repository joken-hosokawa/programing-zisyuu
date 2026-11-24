//P155 練習問題9-2
#include <stdio.h>

int main()
{
	char a = 0; //初期値が偶然xの場合実行されないことがあるため、初期化を行う。

	while( a != 'x' ){
		scanf( "%c", &a );
		if( a == 'x' )
			break;
		printf( "%c", a );
	}

	return 0;
}