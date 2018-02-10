#include <stdio.h>
#include <string.h>
int main() {
	char abc [100];
	gets(abc);
	char *split = strtok(abc, " ");
	while (split != NULL) {
		printf("%s", split);
		split = strtok(NULL, " ");
	}
}