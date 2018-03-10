#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	a = a / 10000;
	if (b < 3)
		printf("%d", 2013 - (a + 1900));
	else
		printf("%d", 2013 - (a + 2000));
}
