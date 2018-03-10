#include <stdio.h>
int main()
{
	for (int a = 1; a <= 9; a++) {
		for (int b = 2; b <= 5; b++) {
			printf("%d x %d = %2d", b, a, a * b);
			if (b != 5)
				printf("\t");
		}
		printf("\n");
	}


}
