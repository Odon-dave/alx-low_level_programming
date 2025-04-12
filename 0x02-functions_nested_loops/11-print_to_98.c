#include "main.h"
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
putchar(",");
putchar(' ');
}
}
else
{
for (; n >= 98; n--)
{
print_number(n);
if (n != 98)
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
