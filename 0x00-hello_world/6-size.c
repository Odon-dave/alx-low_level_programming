#include <stdio.h>
/**
 * main -program that print memory size of
 * various data types on a computer using printf
 * Return:0 if the program is success
 */
int main(void)
{
int UniqueIntVar;
long int UniqueLongIntVar;
long long int UniqueLongLongIntVar;
float UniqueFloatVar;
double UniqueDoubleVar;
char UniqueCharVar;

	printf("%lu\n", sizeof(UniqueIntVar));
	printf("%lu\n", sizeof(UniqueLongIntVar));
	printf("%lu\n", sizeof(UniqueLongLongIntVar));
	printf("%lu\n", sizeof(UniqueFloatVar));
	printf("%lu\n", sizeof(UniqueDoubleVar));
	printf("%lu\n", sizeof(UniqueCharVar));
	return (0);
}
