#include <stdio.h>
int main()
{
	int a[7];
	int b[6];
	int c = 0;
	for (int i = 0; i < 7; i++)
		scanf("%d", &a[i]);
	for (int s = 0; s < 6; s++)
		scanf("%d", &b[s]);
	for (int i = 0; i < 6; i++)
		for (int s = 0; s < 6; s++) {
			if (a[i] == b[s])
				c += 1;
		}
	if (c == 5) {
		for (int i = 0; i < 6; i++) {
			if (a[6] == b[i]) {
				printf("2");
				return 0;
			}
		}
		printf("3");
	}
	else {
		if (c == 6)
			printf("1");
		else if (c == 4)
			printf("4");
		else if (c == 3)
			printf("5");
		else
			printf("0");
	}
}
