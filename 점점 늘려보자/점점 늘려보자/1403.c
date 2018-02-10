#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arry[10000] = { 0 };
	for (int i = 0; i < n; i++) {
		scanf("%d", &arry[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", arry[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", arry[i]);
	}
}