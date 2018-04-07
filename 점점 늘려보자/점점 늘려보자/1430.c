#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>
int main()
{
	int *n_box, *m_box;
	int n, m, sum;
	scanf("%d", &n); 
	n_box = ((int*)calloc(n, sizeof(int)));
	for (int i = 0; i < n; i++) {
		scanf("%d", &n_box[i]);
		//n_box[sum - 1]++;
	}
	scanf("%d", &m);
	m_box = ((int*)calloc(m, sizeof(int)));
	for (int j = 0; j < m; j++) {
		scanf("%d", &m_box[j]);
		//m_box[j]++;
	}
	
	for (int i = 0; i < m; i++) {
		int bol = 0;
		for (int j = 0; j < n; j++) {
			if (m_box[i] == n_box[j]) {
				printf("1 ");
				bol = 1;
				break;
			}
		}
		if (!bol) {
			printf("0 ");
		}
			
	}
	free(n_box); free(m_box);
}