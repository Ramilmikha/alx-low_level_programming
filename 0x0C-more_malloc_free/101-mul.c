#include <stdio.h>
#include <stdlib.h>
/**
* is_digit - Checks if a string contains only digits.
* @str: The string to check.
* Return: 1 if all characters are digits, 0 otherwise.
*/
int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}
