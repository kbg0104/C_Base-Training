#include <stdio.h>
int main()
{
	struct stu {
		char name[20];
		int grade;
	};
	struct stu stus[50] = { 0 };
	int p;
	int sum = 0;
	scanf("%d", &p);
	for (int i = 0; i < p; i++)
		scanf("%s %d", stus[i].name, &stus[i].grade);
	for (int i = 0; i < p; i++) {
		for (int j = 0; j < p - i - 1; j++) {
			if (stus[j].grade > stus[j + 1].grade) {
				struct stu t = stus[j];
				stus[j] = stus[j + 1];
				stus[j + 1] = t;
			}
		}
	}
	printf("%s", stus[p - 3].name);
}
