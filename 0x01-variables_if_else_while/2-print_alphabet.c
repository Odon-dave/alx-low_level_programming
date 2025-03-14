#include <stdio.h>
/**
 * main - a program that prints alphabetical letters
 * Return: 0 (success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <='z'; letter++)
putchar (letter);
putchar ('\n');
return (0);
}
