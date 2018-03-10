#include <stdio.h>
int main()
{
	int a, n10, n1;
	scanf("%d", &a);
	n1 = a / 10;
	n10 = a % 10 *10;
	a = (n10 + n1) * 2;
	if (a >= 100)
		a -= 100;
		printf("%d\n", a);
	if (a <= 50)
		printf("GOOD");
	else
		printf("OH MY GOD");
}
