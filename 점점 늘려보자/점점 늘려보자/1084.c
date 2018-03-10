#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	for (int red = 0; red < a; red++)
		for (int green = 0; green < b; green++)
			for (int blue = 0; blue < c; blue++)
				printf("%d %d %d\n", red, green, blue);
	printf("%d", a*b*c);
	
}
