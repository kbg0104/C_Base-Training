#include <stdio.h>
int main()
{
	double bag, max, rst=1;
	double a, b;
	scanf("%lf %lf", &a, &b);
	bag = a + b;
	max	= bag;
	bag = a - b;
	if (bag > max)
		max = bag;
	bag = b - a;
	if (bag > max)
		max = bag;
	bag = a * b;
	if (bag > max)
		max = bag;
	bag = a / b;
	if (bag > max)
		max = bag;
	bag = b / a;
	if (bag > max)
		max = bag;
	for (int r = 0; r < b; r++)
		 rst *= a;
	if (rst > max)
		max = rst;
	rst = 1;
	for (int r = 0; r < a; r++)
		rst *= b;
	if (rst > max)
		max = rst;
	printf("%lf", max);
}
