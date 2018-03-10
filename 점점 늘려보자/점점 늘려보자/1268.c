#include <stdio.h>
int main()
{
	int a, b, sum = 0;
	scanf("%d", &a);
	for (int n = 0; n < a; n++) {
		scanf("%d", &b);
		if (b % 2 == 0)
			sum += 1;
	}
	printf("%d", sum);
}
