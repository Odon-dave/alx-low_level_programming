#include "main.h"
/**
 * print_sign- program that prints sign of a number
 * @n: character to be checked
 * Return: 1 if n is greater than 0
 *         0 if in is 0
 *         -1 if n is less than 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0;)
}
else
{
_putchar('-');
return (-1);
}
}
