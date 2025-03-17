#include <stdio.h>
/**
 * main - a program that prints numbers to base 16
 * Return: 0 (success)
 */
int main(void)
{
int i;
char letter;
for (i = 0; i < 10; i++)
{
putchar (i +'0');
}
for (letter ='a'; letter <= 'f'; letter++)
{
putchar (letter);
}
putchar ('\n');
return (0);
}