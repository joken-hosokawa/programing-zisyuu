/* No.29	Name細川春希
演習7「クイック・サーブ」
Programming/2/practice7.c
*/
#include <stdio.h>

int main()
{
	char order; // 注文するメニューをあらわす文字

	printf( "注文入力：" );
	scanf( "%c",&order ); // 注文の入力受付

	switch(order) { // 注文によって切り替え
	case 'C': // Cセットの場合
		printf( "コーンスープ\n" );
	case 'B': // Bセットの場合
		printf( "サラダ\n" );
	case 'A': // Aセットの場合
		printf( "ライス\nコーヒー\n" );
	default: // 上記以外の場合、単品として扱う
		printf( "ハンバーグ\n" );
	}

	return 0;
}