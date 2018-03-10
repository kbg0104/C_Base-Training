#include <stdio.h>
int main()
{
	int a, b, c, n;
	scanf("%d %d %d", &a, &b, &c);
	for (n = 1; n < c; n++)
		a *= b;
	printf("%d", a);

}
