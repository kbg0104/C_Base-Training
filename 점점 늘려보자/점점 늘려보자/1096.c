#include <stdio.h>
int main()
{
     int list[19][19] = {0};
     int n, i, j, a, b;
     scanf("%d", &n);
     for (i = 0; i<n; i++){
     	scanf("%d %d", &a, &b);
     	list[a-1][b-1]++;
     }
     for(i = 0; i < 19; i++){
     	for(j = 0; j < 19; j++){
     	   if (list[i][j] >= 1)
     	   printf("1 ");
     	   else
     	   printf("0 ");	
     	}
     	printf("\n");
     }
}
