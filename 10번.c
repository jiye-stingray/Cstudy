#include <stdio.h>
#pragma warning (disable:4996)
void swap(int* x, int* y, int* z) {
	int temp1 = *x, temp2 = *y, temp3 = *z;
	*z = temp1;
	*y = temp3;
	*x = temp2;
}
int main() {
	int a = 100, b = 200, c = 300;
	printf("변경중: %d %d %d\n",a,b,c);
	swap(&a,&b,&c);
	printf("변경후: %d %d %d\n", a, b, c);
	
	return 0;
}