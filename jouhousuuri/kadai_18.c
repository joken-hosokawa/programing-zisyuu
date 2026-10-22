//課題18
#include <stdio.h>

int main()
{
	int fu,a;
	fu = 0;

	for(int k =0; k <= 10; k++){
		printf("値：%d>")
		scanf("%d",&a);
		if(a < 0){
			fu += 1;
		}
	}
	printf("%d",fu);
	return 0;
}
