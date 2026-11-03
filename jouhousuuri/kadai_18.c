//課題18
#include <stdio.h>

int main()
{
	int fu,a;
	fu = 0;

	for(int k =0; k < 10; k++){
		printf("値：%d>",k+1);
		scanf("%d",&a);
		if(a < 0){
			fu += 1;
		}
	}
	printf("%d\n",fu);
	return 0;
}

/*
値：1>1
値：2>-2
値：3>3
値：4>-4
値：5>5
値：6>-6
値：7>7
値：8>-8
値：9>9
値：10>-10
5
*/