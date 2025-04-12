#include "main.h"
#include <stdio.h>
/**
 * print_number- a helper to print an integer 
 */
void print_number(int n)
{
if (n < 0)
{
putchar('-');
n = -n;
}
if (n /10)
{
print_number(n /10);
}
putchar((n %10) +'0');
}
/**
* print_to_98- function that prints natural numbers to 98
* @n: number to be checked
*/
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
print_number(n);
if (n != 98)
{
putchar(',');
putchar(' ');
}
}
}
else
{
for (; n >= 98; n--)
{
print_number(n);
if (n != 98)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
}
