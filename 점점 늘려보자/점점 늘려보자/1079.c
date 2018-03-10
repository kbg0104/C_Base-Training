#include <stdio.h>
int main()
{
	char a;
	int b = 113;
	//printf("%c, %c", a, b);
	for (;;) {
		scanf("%c", &a);
		if (a == b) {
			printf("%c", a);
		break;
	}
		else
			if (' ' != a)
				printf("%c\n", a);
	}
}
