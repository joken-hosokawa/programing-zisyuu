//課題19
#include <stdio.h>

int main()
{
	int n,kin,gou = 0,k;
	float poi = 0;
	printf( "個数を入力>" );
	scanf("%d",&n);
	
	for(k = 1; k <= n; k++){
		printf( "金額を入力>" );
		scanf("%d",&kin);
		gou += kin;
	}

	if(gou >= 10000){
		poi += gou * 0.1;
	} else {
		poi += gou * 0.05;
	}

	printf("%d %.1f",gou,poi);

	return 0;
}