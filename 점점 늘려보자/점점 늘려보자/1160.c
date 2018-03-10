#include <stdio.h>
enum week { mon = 1, tue, wed, thu, fri, sat, sun };
int main()
{
	int n;
	scanf("%d", &n);
	if ((n==1) || (n==3) || (n==5) || (n==7))
		printf("oh my god");
	else
		printf("enjoy");
}
