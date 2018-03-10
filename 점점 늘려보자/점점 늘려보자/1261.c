#include <stdio.h>
int main()
{
	int a[10];
	int flag = 0;
	for (int in = 0; in < 10; in++)
		scanf("%d", &a[in]);
	/*for (int in = 0; in < 10; in++)
		printf("%d", a[in]);*/
	for (int out = 0; out < 10; out++)
		if (a[out] % 5 == 0) {
			printf("%d", a[out]);
			flag = 1;
			break;
		}
	if (flag == 0)
		printf("0");
	return  0;
	
}
