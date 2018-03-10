#include <stdio.h>
int main()
{
	int n, m;
	scanf("%d %d", &m, &n);
	for (int a = 1; a <= n; a++) {
		for (int b = 1; b <= m; b++) {
			if ((a == 1 && b == 1) || (a == n && b == 1) || (b == m && a == 1) || (a == n && b == m))
				printf("+");
			else if (a == 1 || a == n)
				printf("-");
			else if (b == 1 || b == m)
				printf("|");
			else
				printf(" ");
		}
		printf("\n");
	}
} 
