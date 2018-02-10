#include <stdio.h>
int main()
{
	int right = 0, left = 0;
	char trash[1000000];
	scanf("%s", trash);
	for (int i = 0; i < 100000; i++) {
		if (trash[i] == '(')
			right++;
		if (trash[i] == ')')
			left++;
		if (trash[i] == NULL)
			break;
	}
	printf("%d %d", right, left);
}