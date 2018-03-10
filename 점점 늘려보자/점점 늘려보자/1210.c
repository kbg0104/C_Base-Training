#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	for (int r = 0; r <= 5; r++)
		if (a == 1)
			a = 400;
		else if (a == 2)
			a = 340;
		else if (a == 3)
			a = 170;
		else if (a == 4)
			a = 100;
		else if (a == 5)
			a = 70;
	for (int r = 0; r <= 5; r++)
		if (b == 1)
			b = 400;
		else if (b == 2)
			b = 340;
		else if (b == 3)
			b = 170;
		else if (b == 4)
			b = 100;
		else if (b == 5)
			b = 70;
	if (a + b > 500)
		printf("angry");
	if (a + b <= 500)
		printf("no angry");
}
