#include <stdio.h>
/**
 * main -program that print memory size of
 * various data types on a computer using printf
 * Return:0 if the program is success
 */
int main(void)
{
int a;
long int b;
long long int c;
float d;
double e;
char f;

	printf("%lu\n", sizeof(a));
	printf("%lu\n", sizeof(b));
	printf("%lu\n", sizeof(c));
	printf("%lu\n", sizeof(d));
	printf("%lu\n", sizeof(e));
	printf("%lu\n", sizeof(f));
	return (0);
}
