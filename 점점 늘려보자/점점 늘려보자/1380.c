#include <stdio.h>
int main()
{
	int k;
	scanf("%d", &k);
	for (int a = 1; a <= 6; a++) {
		for (int b = 1; b <= 6; b++) {
			if (a + b == k)
				printf("%d %d\n", a, b);

		}
	}

}
