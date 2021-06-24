#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
struct Gender
{
	char gen[10];
};
int main() {
	struct Gender m;
	strcpy(m.gen, "³²");
	printf("%s", m.gen);

	return 0;
}