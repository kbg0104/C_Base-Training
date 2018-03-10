#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a < 14)
		printf("%d 3", (2013 - a) - 2000);
	else
		printf("%d 1", (2013 - a) - 1900);
}
