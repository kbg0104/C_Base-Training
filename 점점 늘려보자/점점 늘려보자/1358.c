#include <stdio.h>
int main()
{
	int a, g, h = 1;
	scanf("%d", &a);
	for (int i = (a + 1) / 2; i > 0; i--) {
		for (g = i - 1; g > 0; g--)
			printf(" ");
		for (int j = 1; j <= h; j++)
			printf("*");
		h += 2;
		printf("\n");
	}
}
