#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a >= 90)
	{
		printf("A\n");
	}
	if (a >= 70 && a < 90)
	{
		printf("B\n");
	}
	if (a >= 40 && a < 70)
	{
		printf("C\n");
	}
	if (a < 40)
	{
		printf("D\n");
	}
	return 0;
}
