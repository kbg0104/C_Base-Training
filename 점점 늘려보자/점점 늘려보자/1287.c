#include<stdio.h>
void star(int);
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= 9; i++) {
		star(n * i);
		printf("\n");
	}
}
void star(int a)
{
	for (int i = 1; i <= a; i++) {
		printf("*");
	}
}