#include <stdio.h>
int main()
{
	int a, sum = 0;
	scanf("%d", &a);
	for (int n = 0; n <= a; n++) {
		if (n % 10 == 1)
			sum += 1;
	}
	printf("%d", sum);
}
