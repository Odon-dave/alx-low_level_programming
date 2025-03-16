#include <stdio.h>
/**
 * main - a program that prints letters in reverse form
 * Return: 0 (success)
 */
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
