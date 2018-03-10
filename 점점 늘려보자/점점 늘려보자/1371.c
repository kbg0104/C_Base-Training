#include <stdio.h>
int main()
{
	int n;
	int a, b, c, d, sum = 0;
	scanf("%d", &n);
	for (a = n - 1; a > 0; a--) {
		for (b = a; b > 0; b--)
			printf(" ");
		printf("*");
		for (c = 0; c < sum*2; c++)
			printf(" ");
		printf("*");
			sum += 1;
		printf("\n");
	}//1 ~ 중간
	sum = 2;
	while (sum != 0) {
		printf("*");
		for (a = n * 2 - 2; a > 0; a--)
			printf(" ");
		printf("*\n");
		sum -= 1;
	}//중간
	sum = n - 2;
	for (a = 0; a < n - 1; a++) {
		for (b = 0; b <= a; b++)
			printf(" ");
		printf("*");
		for (c = 0; c < sum * 2; c++)
			printf(" ");
		printf("*");
		sum -= 1;
		printf("\n");
	}//1 ~ 중간
}
