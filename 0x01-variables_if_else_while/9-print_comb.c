#include <stdio.h>
/**
 * main - a program that prints a combination of all possible numbers
 * Return: 0 (success)
 */
int main(void)
{
int i;
for (i = 0; i < 10 ; i++)
{
{
putchar(i + '0');
}
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
