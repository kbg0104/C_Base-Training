#include <stdio.h>
#define a1(a) (a)*(a)
#define a2(a, b) (a)+(b)

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	//printf("%d %d %d", a2(a, b), a2(b, c), a2(a, c));
	if ((a2(a, b) <= c) || (a2(b, c) <= a) || (a2(a, c) <= b))
		printf("삼각형아님");
	else if ((a == b) && (b == c))
		printf("정삼각형");
	else if ((a == b) || (b == c) || (a == c))
		printf("이등변삼각형");
	else if ((a1(a) + a1(b) == a1(c)) || (a1(a) + a1(c) == a1(b)) || (a1(c) + a1(b) == a1(a)))
		printf("직각삼각형");
	else
		printf("삼각형");
} 
