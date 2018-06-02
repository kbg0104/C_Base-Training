#include <stdio.h>
int main()
{
	int w_h[9], r_h[9] = { 0 }, all = 0;
	int i, j, z;
	for (i = 0; i < 9; i++) {
		scanf("%d", w_h[i]);
		all += w_h[i];
	}
	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
			if (100 == all - w_h[i] - w_h[j])
				for (z = 0; z < 9; z++) 
					if (z != i && z != j)
						r_h[z] = w_h[z];
		
}