#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	
	scanf("%d.%d.%d", &a, &b, &c);
	printf("%04d.%02d.%02d", a, b, c);
		
		return 0;
}
