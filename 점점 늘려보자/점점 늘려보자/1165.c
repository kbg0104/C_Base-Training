#include <stdio.h>
int main()
{
	int a, b, c = 0;
	scanf("%d %d", &a, &b);
	c = 90 - a;
	c /= 5;
	if (!(0 == a % 5))
		b++;
	printf("%d", c + b);
}
