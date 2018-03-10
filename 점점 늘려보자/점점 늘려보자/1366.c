#include <stdio.h>
int main()
{
	int n;
	int x, y, z;
	scanf("%d", &n);
	z = n / 2 + 1;
	//printf("%d", z);
	for (x = 1; x <= n; x++) {
		for (y = 1; y <= n; y++) {
			//printf("%d", y);
			if (x == 1 || x == n || x == y || y == 1 || y == n || (x + y) == (n + 1) || x == z || y == z)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
