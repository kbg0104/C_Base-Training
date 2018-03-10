#include <stdio.h>
int main()
{
	int a;
	int i = 1;
	int sum = 0;
	scanf("%d", &a);
	while (i <= a)
	{
		if (i % 3 == 0)
		{
			printf("X ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	return 0;
}
