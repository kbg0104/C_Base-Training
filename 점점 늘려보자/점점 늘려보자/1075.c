#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	a -= 1;
	while (a >= 0)
	{
		printf("%d\n", a);
		a--;
	}

	return 0;
}
