#include <stdio.h>
int main()
{
	int a, b, c, n;
	scanf("%d %d %d", &a, &b, &c);
	for (n = 1; n < 10000; n++) {
		//printf("n=%d\n", n);
		if ((n % a == 0) && (n % b == 0) && (n % c == 0)) {
			printf("%d", n);
			break;
		}
	}
}
