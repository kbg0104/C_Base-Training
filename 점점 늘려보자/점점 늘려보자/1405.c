#include <stdio.h>
void req(int*, int);
int main()
{
	int n;
	scanf("%d", &n);
	int arry[10000] = { 0 };
	for (int i = 0; i < n; i++) {
		scanf("%d", &arry[i]);
	}
	req(arry, n);
}
void req(int *arr,int kia)
{
	int temp;
	for (int i = 0; i < kia; i++) {
		for (int j = 0; j < kia; j++)
			printf("%d ", arr[j]);
		temp = arr[0];
		for (int j = 1; j < kia; j++)
			arr[j - 1] = arr[j];
		arr[kia - 1] = temp;
		printf("\n");
	}
}