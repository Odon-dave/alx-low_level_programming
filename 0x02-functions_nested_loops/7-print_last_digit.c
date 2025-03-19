#include "main.h"
/**
 * print_last_digit- a program that prints last digit
 * Return:last_digit (success)
 */
int print_last_digit(int)
last_digit = n % 10;
{
if (last_digit > 0)
{
_putchar(last_digit + '0');
}
else
{
return (last_digit);
}
}