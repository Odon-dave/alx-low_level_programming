#include <stdio.h>
/**
 * main -program that print memory size of
 * various data types on a computer using printf
 * Return:0 if the program is success
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

	printf("%lu\n", sizeof(a));
	printf("%lu\n", sizeof(b));
	printf("%lu\n", sizeof(c));
	printf("%lu\n", sizeof(d));
	printf("%lu\n", sizeof(e));
	return (0);
}
