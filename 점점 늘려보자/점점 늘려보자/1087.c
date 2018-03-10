#include <stdio.h>
int main()
{
	int a, b = 0;
	scanf("%d", &a);
	for (int c = 0; b <= a; c++) {
		b += c;
	}
	printf("%d", b);
}
