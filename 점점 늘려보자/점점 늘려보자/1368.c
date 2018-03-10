#include <stdio.h>
#include <math.h>
int main()
{
	int h, k;
	int a, b, c, v;
	char d;
	scanf("%d %d %c", &h, &k, &d);
	//printf("%d %d %c", h, k, d);
	for (a = h; a > 0; a--) {
		if (d == 'R') {
			for (b = a - 1; b > 0; b--)
				printf(" ");
			for (int c = k; c > 0; c--)
				printf("*");
		}
		else {
			for (int i = 0; i < abs(a - h); i++)
				printf(" ");
			/*for(v = 1; v <= h; v++)
				for (b = v - 1; b >= 0; b--)
					printf(" ");*/
			for (int c = k; c > 0; c--)
				printf("*");

		}
		printf("\n");
	}

}
