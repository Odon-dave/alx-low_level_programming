#include "main.h"
/**
 * print_number- a helper to print a non negative number
 * @e: number to be checked
 */
void print_number(int e)
{
    if (e >= 100)
    {
        putchar((e / 100) + '0');
        putchar(((e / 10) % 10) + '0');
        putchar((e % 10) + '0');
    }
    else if (e >= 10)
    {
        putchar((e / 10) + '0');
        putchar((e % 10) + '0');
    }
    else
    {
        putchar(e + '0');
    }
}
/**
 * print_times_table- prints n timestable from o to n
 * @n:size of the table
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
    return;
    int a, b;
        for (a = 0; a <= n; a++)
        {
            for (b = 0; b <= n; b++)
            {
                int product = a * b;
                if (b == 0)
                {
                    print_number(product);
                }
                else
                {
                    putchar(',');
                    if (product < 10)
                    {
                        putchar(' ');
                        putchar(' ');
                        putchar(' ');
                    }
                    else if (product <100)
                    {
                        putchar(' ');
                        putchar(' ');
                    }
                    else
                    {
                        putchar(' ');
                    }
                    print_number(product);
                }
            }
            putchar('\n');
        }
}
