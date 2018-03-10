#include <stdio.h>
#include <math.h>
int main() {
	long int num;
	int num2; 
	int result2;
	int result1;
	scanf("%ld", &num);
	result2 = sqrt(num);
	num2 = result2*result2;
	result1 = num - num2; 
	printf("%d %d", result1, result2);
}
