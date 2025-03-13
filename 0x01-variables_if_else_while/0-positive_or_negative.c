#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - a program to print random numbers
 *Return: 0 (success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is a negative number", n);
}
else if (n > 0)
{
printf("%d is a positive number", n);
}
else
{
printf("%d is zero", n);
}
return (0);
}
