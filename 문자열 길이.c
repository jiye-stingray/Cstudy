#include <stdio.h>
#pragma warning (disable: 4996)
int main() {

	char str[30] = "C language is easy";
	int i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{

	}

	printf("문자열\"%s\"의 길이는 %d입니다\n", str, i);
	return 0;
}