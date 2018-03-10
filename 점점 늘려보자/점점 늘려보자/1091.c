#include <stdio.h>
int main()
{
	int a, b, c, n, g;
	scanf("%d %d %d %d", &a, &b, &g, &c);
	for (n = 1; n < c; n++)
		a = a * b + g;
	printf("%d", a);

}
