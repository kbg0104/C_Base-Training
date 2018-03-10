#include <stdio.h>
int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	for (int r = 0; r < 5; r++) {
		if (a + b + c + d == r) 
			if (r == 0)
				printf("모");
			else if (r == 1)
				printf("도");
			else if (r == 2)
				printf("개");
			else if (r == 3)
				printf("걸");
			else if (r == 4)
				printf("윷");
	}
}
