#include <stdio.h>
int main()
{
	int n;
	int x, y;
	scanf("%d", &n);
	for (x = 1; x <= n; x++) {
		for (y = 1; y <= n; y++) {
			//printf("%d", y);
			if (x == 1 || x == n || x == y || y == 1 || y == n || (x + y) == (n + 1))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
