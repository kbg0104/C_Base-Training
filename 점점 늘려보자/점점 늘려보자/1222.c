#include <stdio.h>
int main()
{//아아아아아아아아아
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a != 90)
		b++;
	for (a; a < 90; a += 5)
		b++;
	if (a >= 90)
		b--;
	if (b > c)
		printf("win");
	else if (c > b)
		printf("lose");
	else
		printf("same");
} 
