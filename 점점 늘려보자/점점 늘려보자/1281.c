#include<stdio.h>
int main()
{
	int a, b, sum = 0;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++) {
		if (i % 2 == 0) {
			sum -= i;
			printf("-%d", i);
		}
		else {
			sum += i;
			if (i == a)
				printf("%d", i);
			else
			printf("+%d", i);
		}
	}
	if (sum > 0)
		printf("=+%d", sum);
	else
		printf("=%d", sum);
}
