#include<stdio.h>
int main()
{
	int x, sum = 0;
	char m = '+';
	int end = 1;
	int next = 0;
	while (end) {
		if (next % 2 == 0) {
			scanf("%d", &x);
			switch (m) {
				case '+':
					sum += x;
					break;
				case '-':
					sum -= x;
					break;
				case '*':
					sum *= x;
					break;
				case '/':
					sum /= x;
					break;
				\
			}
		}
		else {
			scanf("%c", &m);
			if (m == '=') {
				printf("%d", sum);
				break;
			}
		}
		next++;
	}
}