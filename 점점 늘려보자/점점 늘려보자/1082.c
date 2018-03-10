#include <stdio.h>
int main()
{
	char a;
	scanf("%x", &a);
	printf("%X*1=%X\n", a, a * '\x1');
	printf("%X*2=%X\n", a, a * '\x2');
	printf("%X*3=%X\n", a, a * '\x3');
	printf("%X*4=%X\n", a, a * '\x4');
	printf("%X*5=%X\n", a, a * '\x5');
	printf("%X*6=%X\n", a, a * '\x6');
	printf("%X*7=%X\n", a, a * '\x7');
	printf("%X*8=%X\n", a, a * '\x8');
	printf("%X*9=%X\n", a, a * '\x9');
	printf("%X*A=%X\n", a, a * '\xA');
	printf("%X*B=%X\n", a, a * '\xB');
	printf("%X*C=%X\n", a, a * '\xC');
	printf("%X*D=%X\n", a, a * '\xD');
	printf("%X*E=%X\n", a, a * '\xE');
	printf("%X*F=%X\n", a, a * '\xF');
}
