#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for (int n = 1; n <= 9; n++) {
		printf("%d*%d=%d\n", a, n, a*n);
	}
}
