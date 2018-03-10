#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a <= b)
		for (int n = a; n <= b; n++)
			printf("%d ", n);
	else if (b < a)
		for (int n = b; n <= a; n++)
			printf("%d ", n);
}
