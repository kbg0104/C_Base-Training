#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a / 100000000000 >= 1)
		printf("12");
	else if (a / 10000000000 >= 1)
		printf("11");
	else if (a / 1000000000 >= 1)
		printf("10");
	else if (a / 100000000 >= 1)
		printf("9");
	else if (a / 10000000 >= 1)
		printf("8");
	else if (a / 1000000 >= 1)
		printf("7");
	else if (a / 100000 >= 1)
		printf("6");
	else if (a / 10000 >= 1)
		printf("5");
	else if (a / 1000 >= 1)
		printf("4");
	else if (a / 100 >= 1)
		printf("3");
	else if (a / 10 >= 1)
		printf("2");
	else if (a / 1 >= 1)
		printf("1");
	else
		printf("0");
}
