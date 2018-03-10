#include <stdio.h>
#include <string.h>
int main()
{
	int alp[26] = { 0 };
	char blabla[91];
	gets(blabla);
	for (int i = 0; i < strlen(blabla); i++) {
		if (blabla[i] <= 90 && blabla[i] >= 65)
			alp[blabla[i] - 65]++;
		if (blabla[i] <= 122 && blabla[i] >= 97)
			alp[blabla[i] - 97]++;
	}
	for (int j = 97; j <= 122; j++) {
		printf("%c:%d\n", j, alp[j - 97] );

	}


}