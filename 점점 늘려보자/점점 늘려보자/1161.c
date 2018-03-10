#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d", &a);
	if (0 == a % 2)
		printf("짝수+");
	else
		printf("홀수+");
	scanf("%d", &b);
	if (0 == b % 2)
		printf("짝수=");
	else
		printf("홀수=");
	if (0 == (a + b) % 2)
		printf("짝수");
	else
		printf("홀수");
}
