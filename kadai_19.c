//課題19
#include <stdio.h>

int main()
{
	int n,kin,gou = 0,k;
	float poi = 0;
	printf( "個数を入力>" );
	scanf("%d",&n);
	
	for(k = 1; k <= n; k++){
		printf( "%d個目の金額を入力>",k );
		scanf("%d",&kin);
		gou += kin;
	}

	if(gou >= 10000){
		poi += gou * 0.1;
	} else {
		poi += gou * 0.05;
	}

	printf("%d %.1f\n",gou,poi);

	return 0;
}

/*
個数を入力>5
1個目の金額を入力>900
2個目の金額を入力>100
3個目の金額を入力>459
4個目の金額を入力>1233
5個目の金額を入力>3214
5906 295.3
*/