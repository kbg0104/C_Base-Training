#include <stdio.h>
int main()
{
	int n;
	int x, y, z;
	scanf("%d %d", &n, &z);
	//z += 1;
	//printf("%d", z);
		for (x = 1; x <= n; x++) {
			for (y = 1; y <= n; y++) {
			//printf("%d", y);
				if (x == 1 || x == n  || y == 1 || y == n || (x + y) % z == 1|| z == 1)
					printf("*");
				else
					printf(" ");
		}
		printf("\n");
	}
}
