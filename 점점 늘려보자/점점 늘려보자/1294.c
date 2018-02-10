#include <stdio.h>
#include <string.h>
int main()
{

	char c_l[200];
	//int index = 0;

	gets(c_l);
	for (int index = 0; index < strlen(c_l); index++) {
		if (c_l[index] == '\0')
			return 0;
		if (c_l[index] == 32)
			printf("%c", c_l[index]);
		else if ((c_l[index] <= 90 && c_l[index] >= 88) || (c_l[index] <= 122 && c_l[index] >= 120))
			printf("%c", c_l[index] - 23);
		else
			printf("%c", c_l[index] + 3);
	}

	return 0;
}