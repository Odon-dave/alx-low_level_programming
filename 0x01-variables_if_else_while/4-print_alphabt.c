#include <stdio.h>
/**
 * main - a program that prints and excludes some letters
 * Return: 0 (success)
 */
int main(void)
{
char letter='a';
while(letter <= 'z')
{
if(letter !='q' && letter !='e')
{
putchar (letter);
}
letter ++;
}
putchar ('\n');
return 0;
}
