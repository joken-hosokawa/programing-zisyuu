#include <stdio.h>

int main()
{
	float price, tax;

	price = 450 * 2 + 770 + 135;
	price *= .98;// price = price *0.98‚Æ“¯‚¶‚¾ƒˆ
	tax = price * .1;

	printf( "Žx•¥‹àŠz:%.0f\n", price + tax);

	return 0;
}