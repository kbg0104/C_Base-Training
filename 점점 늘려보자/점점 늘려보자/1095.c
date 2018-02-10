#include<stdio.h>
int main()
{
	int n, sum = 23;
	scanf("%d", &n);
	int arry[10000] = { 0 };
	for (int i = 0; i < n; i++) {
		scanf("%d", &arry[i]);
	}
	for (int i = 0; i < n; i++)
		if (sum > arry[i])
			sum = arry[i];
	printf("%d", sum);
}