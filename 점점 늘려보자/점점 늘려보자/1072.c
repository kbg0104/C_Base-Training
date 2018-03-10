#include <stdio.h>
int main()
{
	int i = 1;
	int a;
	int num = 0;
	scanf("%d", &num);
	while (i <= num)
	{
		scanf("%d", &a);
		printf("%d\n", a);
		i++;
	}


	return 0;
}
