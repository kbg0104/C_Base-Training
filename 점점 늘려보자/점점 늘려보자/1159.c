#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if ((50 <= n) && (n <= 70))
		printf("win");
	else if (0 == n % 6)
		printf("win");
	else
		printf("lose");
}
