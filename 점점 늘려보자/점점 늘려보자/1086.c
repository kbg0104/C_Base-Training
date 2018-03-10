#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%.2lf MB", (double)(a*b*c) / 8388608);
}
