#include <stdio.h>
/**
 * main - a program that prints alphabeticalletters in both upper and lowe case
 * Return: 0 (success)
 */
int main() 
{
char letter;
char alphabet;
for (letter = 'a'; letter <='z'; letter ++)
putchar (letter);
for (alphabet ='A'; alphabet <='Z'; alphabet ++)
putchar (alphabet);
putchar ('\n');
return 0;
}