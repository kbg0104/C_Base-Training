#include <stdio.h>
int main()
{
	int n;
	int sum = 0, sum_2 = 0;
	scanf("%d", &n);
	for (int a = 0; a <= n; a++) {
		sum += a;
		sum_2 += sum;
	}
	printf("%d", sum_2);
}
