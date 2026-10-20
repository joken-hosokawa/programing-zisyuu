//P153 練習問題8
#include <stdio.h>

int main()
{
	int i, count = 0;

	for( i = 1; i <= 100; i++ ) {
		if( i % 2 == 0 ) {
			count += 1;
		}
	}
	printf("%d\n",100 - count);

	return 0;
}