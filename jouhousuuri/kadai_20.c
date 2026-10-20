//課題20
#include <stdio.h>

int main()
{
	int ten,i,sum =0;
	float avg;

	for(i = 1; i <= 5; i++){
		printf( "%d人目の点数を入力>",i );
		scanf("%d",&ten);
		sum += ten;
	}

	avg = (float)sum / 5.0; //キャストする
	printf("%d %.1f\n",sum,avg);

	return 0;
}