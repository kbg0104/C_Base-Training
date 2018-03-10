#include <stdio.h>
int main()
{
	char cary[200];
	char c_l;
	int index = 0;

	while (1) {
		scanf("%c", &cary[index]);
		if (cary[index]=='\0')
			return 0;
		if (cary[index] == 32)
			printf("%c", cary[index]);
		else if ((cary[index] <= 67 && cary[index] >=65)|| (cary[index] <= 99 && cary[index] >= 97))
			printf("%c", cary[index] + 23);
		else
			printf("%c", cary[index] - 3);
		index++;
	}
	return 0;
}
