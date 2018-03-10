#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a > 0)
	{
		printf("plus\n");
	}
	if (a < 0)
	{
		printf("minus\n");
	}
	if (a % 2 == 0)
	{
		printf("even\n");
	}
	if (a % 2 == 1 || a % 2 == -1)
	{
		printf("odd\n");
	}
	return 0;
}
