#include <stdio.h>
int main()
{
	int h, m;
	scanf("%d %d", &h, &m);
	if (m < 30) {
		if (h == 0)
			h = 24;
		h--;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
		m++;
	}
	else {
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
		m--;
	}
	printf("%d %d", h, m);
}
