#include <stdio.h>
/**
 * main - a program that prints numbers using putchar
 * Return: 0 (success)
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
