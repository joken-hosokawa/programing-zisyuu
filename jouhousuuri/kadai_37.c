#include <stdio.h>

int main()
{
	int dat[10] = { 78,67,43,98,-1,88,78,65,48,90 };
	int i, n, sum;
	float ave;

	sum = 0;
	n = 0;
	
	for( i = 0; i < 10; i++ ) {
		if( dat[i] >= 0 ) {
			sum += dat[i];
			n += 1;
		}
	}
	ave = (float)sum / n;
	printf( "合計=%d 平均=%f\n", sum, ave );
	
	return 0;
}

/*
合計=655 平均=72.777779

*/