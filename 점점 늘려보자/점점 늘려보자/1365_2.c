#include <stdio.h>
void s_e(int);
int main()
{
	int s;
	int c_sum;
	int a, b, c, d, middle, l;
	scanf("%d", &s);
	c_sum = s - 4;
	s_e(s);//ù°��
	printf("\n");
	for (a = 1; a <= s / 2 - 1; a++) {
		s_e(1);
		for (b = 1; b < a; b++)
			printf(" ");
		s_e(1);
		for (c = 1; c <= c_sum; c++)
			printf(" ");
		c_sum -= 2;
		s_e(1);
		for (d = 1; d < a; d++)
			printf(" ");
		s_e(1);
		printf("\n");
	}//2�� ~ �߾�-1
	{
		if (s % 2 == 1) {
			s_e(1);
			for (middle = 0; middle < (s - 3) / 2; middle++)
				printf(" ");
			s_e(1);
			if (s % 2 == 0)
				s_e(1);
			for (middle = 0; middle < (s - 3) / 2; middle++)
				printf(" ");
			s_e(1);
			printf("\n");//�߾�
		}
	}
	c_sum = 1;
	for (a = 1; a <= s / 2 - 1; a++) {
		s_e(1);
		for (l = b; l > a; l--)
			printf(" ");
		s_e(1);
		for (l = 1; l <= c_sum; l++)
			printf(" ");
		if (s % 2 == 0)
			printf("\b");
		s_e(1);
		c_sum += 2;
		for (l = d; l > a; l--)
			printf(" ");
		s_e(1);
		printf("\n");
	}//�߾�+1 ~ ������-1
	s_e(s);//��������
}
void s_e(int star)
{
	int p;
	for (p = 1; p <= star; p++)
		printf("*");
}//�����