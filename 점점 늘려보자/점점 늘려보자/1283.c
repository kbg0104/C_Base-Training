#include <stdio.h>
int main()
{
	int a, b;
	double list[10], sum;
	scanf("%d %d", &a, &b);
	sum = a;
	for (int i = 0; i < b; i++) {
		scanf("%lf", &list[i]);
		sum = sum * (list[i] / 100 + 1);
		//printf("%lf", sum);
	}
	printf("%.0lf\n", sum - a);
	if (sum - a < 0)
		printf("bad");
	if (sum - a > 0)
		printf("good");
	if (sum - a == 0)
		printf("same");
}
