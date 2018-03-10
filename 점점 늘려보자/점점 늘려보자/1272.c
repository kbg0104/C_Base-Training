#include <stdio.h>
int main()
{
	int h, k, i;
	scanf("%d %d", &h, &k);
	if (h % 2 == 0)
		h *= 5;
	else
		h = (h + 1) / 2;	
	if (k % 2 == 0)
		k *= 5;
	else
		k = (k + 1) / 2;
	printf("%d", h + k);
}
