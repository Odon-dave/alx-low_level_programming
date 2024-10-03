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

	printf("Size of %lu\n", sizeof(a));
	printf("Size of %lu\n", sizeof(b));
	printf("Size of %lu\n", sizeof(c));
	printf("Size of %lu\n", sizeof(d));
	printf("Size of %lu\n", sizeof(e));
	return (0);
}
