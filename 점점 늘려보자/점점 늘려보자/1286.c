#include<stdio.h>
int main()
{
	int a, sum_2 = 1000000, sum_1 = -1000000;
	for (int i = 1; i <= 5; i++) {
		scanf("%d", &a);
		if (sum_1 < a)
			sum_1 = a;
		if(sum_2 > a)
			sum_2 = a;
	}
	printf("%d\n%d", sum_1, sum_2);
}