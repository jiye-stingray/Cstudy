#include <stdio.h>
#pragma warning (disable: 4996)
int recursive(int n) {
	printf("%d\n", n);
	if (n < 1)
		return -1;
	else
		return (recursive(n - 3) + 1);
}
int main() {
	//1.
	//int a[5] = { 5,1,15,20,25 };
	//int i, j, m;
	//i = ++a[1];
	//j = a[1]++;
	//m = a[i++];
	//printf("%d %d %d\n", i, j, m);

	//2.
	//int test[10] = { 0 };
	//int i;
	//for ( i = 0; i < 3; i++)
	//{
	//	test[3 * i + 1] = i * i;
	//}
	//for ( i = 0; i < 10; i++)
	//{
	//	printf("%d", test[i]);
	//}

	//3.
	/*int test[3][3] = { {1,2,3},{4,5} };
	int i, j;
	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			test[i][j] = test[2 - i][2 - j];
		}
	}
	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			printf("%d", test[i][j]);
		}
		printf("\n");
	}*/

	//6
	recursive(10);

	return 0;
}