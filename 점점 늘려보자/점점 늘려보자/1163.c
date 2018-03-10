#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if (0 == (((a + b + c) / 100) % 10) % 2)
		printf("대박");
	else
		printf("그럭저럭");
}
