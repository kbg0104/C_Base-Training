#include <stdio.h>
int fun1(int, int);
int fun2(int, int);
int main()
{
	int a, b, x;
	scanf("%d %d", &a, &b);
	if (a % b == 0) {
		x = fun1(a, b);	
		printf("%d*%d=%d", b, x, a);
	}
	else if (b % a == 0) {
		x = fun2(a, b);
		printf("%d*%d=%d", a, x, b);
	}
	else
		printf("none");

}
int fun1(int a, int b)
{
	int r;
	for (r = 0;; r++)
		if (a == b * r)
			break;
	return r;
}
int fun2(int a, int b)
{
	int r;
	for (r = 0;; r++)
		if (b == a * r)
			break;
	return r;
}
