#include <stdio.h>
int main()
{
	int s;
	scanf("%d", &s);
	for (int i = 1; i <= s; i++) {
		for (int g = 1; g <= s; g++)
			printf("*");
		printf("\n");
	}
}
