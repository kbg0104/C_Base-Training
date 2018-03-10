#include <stdio.h>
int main()
{
	int n, k, c;
	scanf("%d %d", &n, &k);
	c = n;
	for (int i = 1; i < k; i++)
		c *= n;
	if (k == 0)
		printf("1");
	else
		printf("%d", c);

	
}
