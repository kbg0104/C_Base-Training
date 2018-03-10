#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	for (int f = 1; f <= a; f++)
		for (int s = 1; s <= b; s++)
			printf("%d %d\n", f, s);
}
