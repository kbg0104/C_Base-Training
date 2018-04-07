#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, *n_inv;
	int i, j, k;
	scanf("%d", &n);
	n_inv = ((int*)calloc(n , sizeof(int)));
	for (i = 0; i < n; i++)
		scanf("%d", &n_inv[i]);
	for (i = 0; i < n; i++) {
		printf("%d: ", i + 1);
		for (j = 0; j < n; j++) {
			if (i != j) {
				if (n_inv[i] > n_inv[j])
					printf("> ");
				else if (n_inv[i] < n_inv[j])
					printf("< ");
				else if (n_inv[i] == n_inv[j])
					printf("= ");
			}
		}
		printf("\n");
	}
	free(n_inv);

}