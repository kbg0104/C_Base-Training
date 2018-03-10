#include <stdio.h>
int main()
{
	double a;
	double b;
	double c;
	double d;
	scanf("%lf %lf", &a, &b);
	if (a > 160)
	{
		c = (a - 100) * 0.9;
	}
	if (a >= 150 && a <= 160)
	{
		c = (a - 150) / 2 + 50;
	}
	if (a < 150)
	{
		c = a - 100;
	}
	//printf("%lf\n", c);
	d = (b - c) * 100 / c;
	//printf("%lf\n", d);
	if (d > 20)
	{
		printf("비만");
	}
	if (d > 10 && d <= 20)
	{
		printf("과체중");
	}
	if (d <= 10)
	{
		printf("정상");
	}
}
