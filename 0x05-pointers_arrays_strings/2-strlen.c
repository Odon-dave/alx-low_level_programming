#include <stdio.h>
/**
 * _strlen - function to check the length of a string
 * @s:pointer to the strin to measure
 * Return: length of the string 
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
