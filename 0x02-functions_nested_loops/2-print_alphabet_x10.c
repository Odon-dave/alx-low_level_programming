#include "main.h"
/**
 * print_alphabet_x10- function that prints alphabet 10 times
 * 
 */
void print_alphabet_x10(void)
{
int i;
char letter;
for (i = 1; i <= 10; i++)
{
for (char = 'a'; char <= 'z'; char ++)
{
_putchar(char);
}
_putchar('\n');
}
}
