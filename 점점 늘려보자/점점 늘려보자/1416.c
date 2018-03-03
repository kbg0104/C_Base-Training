#include <stdio.h>
long long int ol(long long int);
int main()
{
	long long int n;
	scanf("%lld", &n);
	ol(n);


}
long long int ol(n)
{
	if (n == 1) {
		printf("1");
		return 0;
	}
	if (n % 2 == 1) {
		ol(n / 2);
		printf("1");
		
	}
	else {
		ol(n / 2);
		printf("0");
		
	}
	return 0;
}