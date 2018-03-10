#include <stdio.h>
int main()
{
	int a, b;
	int change;
	scanf("%d %d", &a, &b);
	change = a;
	a = b;
	b = change;
	printf("%d", a + b);
}
