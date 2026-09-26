#include <stdio.h>

int main()
{
	int numof_roe = 7523, member, my_roe;

	printf( "l”:" );
	scanf("%d",&member);
	my_roe = numof_roe / member;
	my_roe += numof_roe % member; // my_roe + (numof_roe % member);‚Æ“¯‚¶ˆÓ–¡‚¾ƒˆ

	printf( "%d—±\n", my_roe );

	return 0;
}