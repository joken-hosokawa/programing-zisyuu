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

/*
1人目の点数を入力>100
2人目の点数を入力>34
3人目の点数を入力>26
4人目の点数を入力>74
5人目の点数を入力>92
326 65.2
*/