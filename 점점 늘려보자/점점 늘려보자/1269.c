#include <stdio.h>
int main()
{
	int a, b, c, d, sum = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	sum = a;
	for (int n = 1; n < d; n++) {
		sum = sum * b + c;
		//printf("%d\n", sum);
	}
	printf("%d", sum);
}
