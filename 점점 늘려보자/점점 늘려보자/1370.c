#include <stdio.h>
int main()
{
	int h, r;
	scanf("%d %d", &h, &r);
	for (r; r > 0; r--) {
		
		for (int a = 0; a < h; a++) {
			for (int a_1 = a; a_1 > 0; a_1--)
				printf(" ");
			printf("*");
			printf("\n");
		}
		for (int a = h - 1; a > 0; a--) {
			for (int a_1 = 0; a_1 < a - 1; a_1++)
				printf(" ");
			printf("*");
			printf("\n");
		}
	}
}
