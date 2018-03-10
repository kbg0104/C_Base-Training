#include <stdio.h>
void star_plus(int);
/*void star_minus(int);*/
int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		star_plus(i);
		printf("\n");
	}
	for (int i = a - 1; i != 0; i--) {
		star_plus(i);
		printf("\n");
	}
}
void star_plus(int a)
{
	for (int star = 1; star <= a; star++)
		printf("*");
}
/*void star_minus(int a)
{
	for (int star = a; star != 0; star--)
		printf("*");
}*/
