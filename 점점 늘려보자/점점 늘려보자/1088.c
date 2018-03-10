#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for (int c = 1; c <= a; c++) {
		if (0 == c % 3)
			continue;
		printf("%d ", c);
	}
}
