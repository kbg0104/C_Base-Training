#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if ((0 == a % 400) || ((0 == a % 4) && (0 != a % 100)))
		printf("yes");
	else
		printf("no");

}
