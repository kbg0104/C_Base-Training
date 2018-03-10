#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for (int b = n; b > 0; b--) {
		for (int a = b - 1; a > 0; a--)
			printf(" ");
		for (int c = n; c > 0; c--)
			printf("*");
		printf("\n");
	}

}
