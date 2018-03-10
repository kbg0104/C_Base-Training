#include <stdio.h>
int main()
{
	double a;
	scanf("%lf", &a);
	if ((50 <= a) && (60 >= a))
		printf("win");
	else
		printf("lose");
}
