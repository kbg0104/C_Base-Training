#include <stdio.h>
int fac(int);
int main()
{
	int n, b;
	scanf("%d", &b);
	n = fac(b);
	printf("%d", n);
}
int fac(int n)
{
	if (n == 0)
		return 1;
	else
		return n * fac(n - 1);
}
