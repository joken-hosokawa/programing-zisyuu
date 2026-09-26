#include <stdio.h>
int main()
{
	char first_name[16], family_name[16];
    int age;

	puts( "こんにちは。あなたの名前は？\n姓と名を半角スペースで区切ってください。" );
	scanf( "%s%s", family_name, first_name );
	printf( "\"%s \"さんですね。おいくつですか？\n", family_name );
	scanf( "%d", &age );
    printf( "%sさんは%d歳なのですね。", first_name, age );

	return 0;
}