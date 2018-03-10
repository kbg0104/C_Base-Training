#include <stdio.h>
int main()
{
	int a;
	int i = 1;
	int sum = 0;
	scanf("%d", &a);
	while (i <= a)
	{
		if (i % 2 == 0)
		{
			sum += i;
			//printf("%d", i);
		}
		i++;
	}
	printf("%d", sum);
	return 0;
}
