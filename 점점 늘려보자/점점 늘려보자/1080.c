#include <stdio.h>
int main()
{
	int a, b = 0, c = 0;
	scanf("%d", &a);
	while (c < a) {
		b++;
		c += b;
		//printf("%d %d\n", b, c);
	}
	printf("%d", b);
}
