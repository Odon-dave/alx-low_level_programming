#include "main.h"
/**
 * print_alphabet_x10- function that prints alphabet 10 times
 * 
 */
void print_alphabet_x10(void)
{
int i;
char letter;
for (i = 0; i <= 9, i++)
{
    _putchar(i + '0');
    for (char = 'a', char <= 'z', char ++)
    {
        _putchar(char);
    }
    _putchar('\n');
}
}
