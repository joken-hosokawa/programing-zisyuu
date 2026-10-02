#include <stdio.h>

#define CAPACITY 256 //最大容量

int main()
{
	int bounty[CAPACITY] = { 0 }, // 賞金額格納用配列（「0」で初期化）
		latest, // 最新の賞金額
		rank = 1, // 暫定順位をセット
		n; // ループ用カウンタ

	for( n = 0; n < CAPACITY - 1; n++ ) {
		printf( "賞金額：" );
		scanf( "%d", &bounty[n] );
		if( bounty[n] == 0 ) {
			latest = bounty[n - 1];
			break; // 入力完了
		}
	}

	for( n = 0; n < CAPACITY && bounty[n] != 0 ; n++ )
		if( bounty[n] > latest )
			rank++; // 順位をアップ

	printf( "週間ランキング：%dゴールドは%d位\n", latest, rank );

	return 0;
}

/*
5500
2000
5000
3500
8000
10000
6600
0
*/
