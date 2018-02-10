#include <stdio.h>
int main() {
	int n;
	int arry[10] = { 0 };
	for (int i = 0; i < 10; i++)
		scanf("%d", &arry[i]);
	scanf("%d", &n);
	printf("%d", arry[n - 1]);
}