//課題21
#include <stdio.h>

int main()
{
	int i, count = 0;
	
	for( i = 1; i <= 100; i++ ) {
		if( i % 3 == 0 ) {
			count += 1;
		}
	}

	printf("%d\n",count);

	return 0;
}