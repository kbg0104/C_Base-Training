#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		for (int g = 0; g < i; g++)
			printf(" ");
		printf("**");
		printf("\n");
	}


}
