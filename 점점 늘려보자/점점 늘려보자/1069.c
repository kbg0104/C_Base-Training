#include <stdio.h>
int main()
{
	char a;
	scanf("%c", &a);
	if (a == 'A')
	{
		printf("best!!!\n");
	}
	if (a == 'B')
	{
		printf("good!!\n");
	}
	if (a == 'C')
	{
		printf("run!\n");
	}
	if (a == 'D')
	{
		printf("slowly~\n");
	}
	if (!(a == 'A' || a == 'B' || a == 'C' || a == 'D'))
	{
		printf("what?\n");
	}
	return 0;
}
