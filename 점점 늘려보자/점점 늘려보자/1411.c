#include <stdio.h>
int main()
{
	int index[50] = { 0 };
	int max, k;
	scanf("%d", &max);
	for (int i = 1; i < max; i++) {
		scanf("%d", &k);
		index[k - 1] = 1;
	}
	for (int i = 0; i < max; i++) {
		if (index[i] == 0) {
			printf("%d", i + 1);
		}
	}



}