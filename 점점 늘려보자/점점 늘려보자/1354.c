﻿#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for (int i = a; i != 0; i--) {
		for (int h = i; h != 0; h--) {
			printf("*");
		}
		printf("\n");
	}
}
