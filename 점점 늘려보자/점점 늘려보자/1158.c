﻿#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if ((30 <= n) && (n <= 40))
		printf("win");
	else if ((60 <= n) && (n <= 70))
		printf("win");
	else
		printf("lose");
}
