#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for (int i = a; i != 0; i--) {
		if (i == a || i == 1)
			for (int h = a; h != 0; h--) {
				printf("*");
			}
		else
		{
			printf("*");
			for (int g = a - 2; g != 0; g--) {
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
}
