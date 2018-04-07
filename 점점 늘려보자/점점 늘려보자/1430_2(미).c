#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, m, sum;
	int n_box[10000000], *m_box;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &sum);
		n_box[sum - 1]++;
	}
	scanf("%d", &m);
	m_box = ((int*)calloc(m, sizeof(int)));
	for (int j = 0; j < m; j++) {
		scanf("%d", &m_box[j]);
	}
	for (int i = 0; i < m; i++) {
		if (n_box[m_box[i]] >= 1)
			printf("1 ");
		else
			printf("0");
	}









}