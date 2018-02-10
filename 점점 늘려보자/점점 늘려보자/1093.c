#include <stdio.h>
int main()
{
	int count[24] = {0};
	int n, j;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &j);
		count[j]++;
	}
	for (int i = 1; i <= 23; i++) {
		printf("%d ", count[i]);
	}
}