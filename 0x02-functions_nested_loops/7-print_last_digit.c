#include "main.h"
/**
 * print_last_digit- a program that prints last digit
 * Return:last_digit (success)
 * @n: the number to be checked
 */
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
{
if (last_digit < 0)
{
last_digit  *= -1;
}
_putchar(last_digit + '0');
return (last_digit);
}
}
