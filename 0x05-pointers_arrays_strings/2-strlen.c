#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to the string.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return length;
}
int main(void)
{
char *str;
int len;
str = "My first strlen!";
len = _strlen(str);
printf("%d\n", len);
return (0);
}
