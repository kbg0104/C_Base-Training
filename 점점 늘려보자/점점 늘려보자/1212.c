#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a <= b && a <= c && b <= c)
		if (a + b > c)
			printf("yes");
		else
			printf("no");
	else if (a <= b && a <= c && c <= b)
		if (a + c > b)
			printf("yes");
		else
			printf("no");
	else if (b <= a && b <= c && a <= c)
		if (b + a > c)
			printf("yes");
		else
			printf("no");
	else if (b <= a && b <= c && c <= a)
		if (b + c > a)
			printf("yes");
		else
			printf("no");
	else if (c <= a && c <= b && a <= b)
		if (c + a > b)
			printf("yes");
		else
			printf("no");
	else if (c <= a && c <= b && b <= a)
		if (c + b > a)
			printf("yes");
		else
			printf("no");
}
