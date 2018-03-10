#include <stdio.h>
int main()
{
	int a, b, m;
	scanf("%d", &a);
	m = a / 2 + 1;
	if (a == 1) {
		scanf("%d", &b);
		printf("%d %d %d", b, b, b);
	}
	else
		for (int i = 1; i <= a; i++) {
			scanf("%d", &b);
			if (i == 1 || i == m || i == a)
				printf("%d ", b);
		}
	
}
