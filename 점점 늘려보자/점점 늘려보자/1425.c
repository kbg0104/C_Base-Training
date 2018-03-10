#include <stdio.h>
int main()
{
	int s[99], n, c;
	scanf("%d %d", &n, &c);
	for (int i = 0; i < n; i++) {
		scanf("%d", &s[i]);
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (s[j] > s[j + 1]) {
				int t = s[j];
				s[j] = s[j + 1];
				s[j + 1] = t;
			}
	for (int i = 1; i <= n; i++) {
		printf("%d ", s[i - 1]);
		if (i % c == 0)
			printf("\n");
	}
}