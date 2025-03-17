#include "main.h"
/**
 * main - function that prints alphabet in lowercase
 * Return: 0 (always success)
 */
void print_alphabet(void);
{
int letter;
for (letter = 'a'; letter <= 'z', letter++)
{
_putchar(letter);
}
_putchar('\n');
return (0);
}
