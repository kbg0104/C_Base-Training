﻿#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a == 1 || a == 2 || a == 12)
	{
		printf("winter\n");
	}
	if (a == 3 || a == 4 || a == 5)
	{
		printf("spring\n");
	}
	if (a == 6 || a == 7 || a == 8)
	{
		printf("summer\n");
	}
	if (a == 9 || a == 10 || a == 11)
	{
		printf("fall\n");
	}
	return 0;
}
