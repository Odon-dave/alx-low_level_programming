#include <stdio.h>
/**
 * main - a program that prints a combination of 2 numbers
 * Return: 0 (success)
 */
int main(void)
{
int a, b;
for (a = 0; a <= 8; a++)
{
for (b = a + 1; b <= 9; b++)
{
{
putchar(a + '0');
putchar(b + '0');
}
if (a != 8 || b != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
