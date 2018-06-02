#include <stdio.h>
int main()
{
	int xy[19][19], n, x, y;
	int i, j;
	for(i = 0; i < 19; i++)
		for (j = 0; j < 19; j++)
			scanf("%d", &xy[i][j]);
	
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		x -= 1;
		y -= 1;
		for (j = 0; j < 19; j++)
			if (xy[x][j] == 1)
				xy[x][j] = 0;
			else
				xy[x][j] = 1;
		for (j = 0; j < 19; j++)
			if (xy[j][y] == 1)
				xy[j][y] = 0;
			else
				xy[j][y] = 1;
	}
	for (i = 0; i < 19; i++) {
		for (j = 0; j < 19; j++) {
			printf("%d ", xy[i][j]);
		}
		printf("\n");
	}
}	