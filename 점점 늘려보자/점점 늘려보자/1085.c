#include <stdio.h>
int main()
{
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("%.1lf MB", (double)(a*b*c*d) / 8388608);
}
