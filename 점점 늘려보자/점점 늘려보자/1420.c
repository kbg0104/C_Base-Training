#include <stdio.h>
int main()
{
	struct stu {
		char name[20];
		int grade;
	};
	struct stu stus[50] = { 0 };
	int p;
	scanf("%d", &p);
	for (int i = 0; i < p; i++)
		scanf("%s %d", stus[i].name, stus[i].grade);

}