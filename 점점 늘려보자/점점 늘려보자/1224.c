#include <stdio.h>
int main()
{//아아아아아아아아아
	int a, b, c, d;
	double I_want_go_home, I_am_so_third;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	I_want_go_home = (double)a / b;
	I_am_so_third = (double)c / d;
	//printf("%lf\n%lf", I_want_go_home, I_am_so_third);
	if (I_want_go_home > I_am_so_third)
		printf(">");
	else if (I_want_go_home < I_am_so_third)
		printf("<");
	else
		printf("=");
}
