#include <stdio.h>
#pragma warning (disable : 4996)
int main(){
	int temp, n, num = 0;
	scanf("%d", &n);
	temp = n;
	int r = 0;

	while (n)
	{
		num = n % 10;
		n = n / 10;
		r = 10 * r + num;

	}
	if (temp == r)
	{
		printf("회문 숫자 입니다");
	}
	else printf("아닙니다");
}