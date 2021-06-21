#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <string.h>
#pragma warning (disable:4996)
struct student
{
	int num;
	char name[20];
	char gen;
};
void swap(int *x, int* y ,int* z) {
	int temp = *x;
	int temp1 = *y;
	int temp2 = *z;
	*x = temp1;
	*y = temp2;
	*z = temp;
}
struct STUDENT
{
	char name[10];
	int n1;
	int n2;
	int n3;
	int sum;
	double avg;
};
int main() {
	//1.
	int n, m, sum =0;
	printf("입력>> ");
	scanf("%d%d",&n,&m);
	int temp = n;
	while (n <= m)
	{
		sum += n;
		n++;
	}
	printf("%d ~ %d사이의 합: %d",temp, m, sum);

	//2.
	int n;
	scanf("%d", &n);
	(n % 3 == 0 && n % 7 == 0) ? printf("3의 배수이면서 7의 배수") : printf("3의 배수이면서 7의 배수아님");
	

	//3.
	int arr[10] = { 2,4,6,8,10 };
	int* a = arr;
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(a+i));
	}

	//4.
	struct student s;
	s.num = 1501;
	strcpy(s.name, "홍길동");
	s.gen = '남';

	//5.
	int arr[15];
	scanf("%s", &arr);
	switch (arr[7])
	{
	case '1':
	case '3': printf("남자"); break;
	case '2':
	case '4': printf("여자"); break;
	default:
		break;
	}

	//6.
	char colors[5][10] = { "Red","Green","Yellow","Black","Pink" };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (strcmp(colors[j],colors[j + 1]) > 0)
			{
				char temp[50];
				strcpy(temp, colors[j]);
				strcpy(colors[j], colors[j + 1]);
				strcpy(colors[j + 1], temp);
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%s", colors[i]);
		printf("\n");
	}

	//7.
	struct STUDENT std1 = { "gsm",68,89,80 };
	std1.sum = std1.n1 + std1.n2 + std1.n3;
	std1.avg = std1.sum / 3.0;
	printf("%s %d %d %d %d %.2lf", std1.name, std1.n1, std1.n2, std1.n3, std1.sum, std1.avg);
	
	//8.
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 2;
	int c = 0;
	for (int i = 0; i < 100; i++)
	{
		n = rand() % 2;
		if (n % 2 == 0) c++;
	}
	printf("짝수:%d\n홀수:%d", c, 100 - c);

	//9.
	int  month;
	printf("달을 입력하세요\n");
	scanf("%d", &month);
	switch (month)
	{
	case 2: printf("28일"); break;
	case 4:
	case 6:
	case 9:
	case 11: printf("30일"); break;
	default: printf("31일");
		break;
	}

	//10.
	int a = 100, b = 200, c = 300;
	printf("a=%d b=%d c=%d", a, b, c); printf("\n");
	swap(&a, &b, &c);
	printf("a=%d b=%d c=%d", a, b, c);

	return 0;
}