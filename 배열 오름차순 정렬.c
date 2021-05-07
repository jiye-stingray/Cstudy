#include <stdio.h>
#pragma warning (disable: 4996)
int main() {
	int arr[10] = { 3,5,11,7,17,8,19,469,119,102 };
	int size = sizeof(arr) / sizeof(int);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
}