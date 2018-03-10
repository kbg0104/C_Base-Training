#include <stdio.h>
int main()
{
	int s, e;
	scanf("%d %d", &s, &e);
	for (int i = 0; i <= 9; i++)
		if (s <= i && i <= e)
			for (int g = 1; g <= 9; g++)
				printf("%d*%d=%d\n", i, g, i * g);
}
