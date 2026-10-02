/* No.29	Name細川 春希
演習5「ロンリースゴロク」
Programming/3/practice5.c
*/
#include <stdio.h>

#define CAPACITY 256 // 最大容量  ※定数マクロ

int main()
{
	int board[CAPACITY] = { 0 }, // スゴロクのマス用配列(「0」で初期化)
		dice, token, bounty = 0; // サイコロの目、コマの場所、賞金総額

	printf( "スゴロクのデータを入力\n<< " );
	for( int n = 0; n < CAPACITY - 1; n++ ) {
		scanf( "%d", &board[n] );
		if( board[n] == 0 )
		break; // ゴールの値が入力されたら完了
	}

	token = 0; // コマをスタートのマスにセット
	do {
		printf( "サイコロの目：" );
		scanf( "%d", &dice ); // サイコロの目を入力
		token += dice; // サイコロの目の分だけコマを進める
		printf( "現在のマス：%d\n", token );
		bounty += board[token - 1]; // 止まったマスの賞金額を足し込む
	} while( token < CAPACITY && board[token] != 0 ); // 

	printf( "生涯獲得賞金額：%dゴールド\n", bounty );

	return 0;
}

/*
100 500 300 600 200 -50 400 700 -300 -800 -200 1000 2000 0
*/