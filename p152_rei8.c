//p152 例題8
#include <stdio.h>

int main()
{
	int i,s;
	s = 0;

	for(i =1; i <= 10; i++){
		s += i;
		printf( "i = %d s = %d\n", i, s );
	}

	printf("s = %d\n",s);
	return 0;

}