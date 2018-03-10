#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%c", &a, &b, &c);
	if (a < b ? a < c : a > c)
		printf("%d", a);
	else if (b < c ? b < a : b > a)
		printf("%d", b);
	else
		printf("%d", c);
}
