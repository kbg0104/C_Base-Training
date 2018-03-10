#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (0 > 170 - a)
		if (0 > 170 - b)
			if (0 > 170 - c)
				printf("PASS");
			else
				printf("CRASH");
		else
			printf("CRASH");
	else
		printf("CRASH");
}
