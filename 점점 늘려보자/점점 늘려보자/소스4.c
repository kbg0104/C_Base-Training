#include <stdio.h>
int main()
{
	char ah[1000];
	gets(ah);
	for (int index = 0; index < strlen(ah); index++) {
		if (ah[index] <= 90 && ah[index] >= 65)
			printf("%c", ah[index] + 32);
		else if (ah[index] <= 122 && ah[index] >= 97)
			printf("%c", ah[index] - 32);
		else
			printf("%c", ah[index]);
	}
}