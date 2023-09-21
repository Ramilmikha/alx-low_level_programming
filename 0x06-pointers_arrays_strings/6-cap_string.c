#include "main.h"
/**
* cap_string - Capitalizes the first letter of each word in a string.
* @str: The input string.
*
* Return: A pointer to the modified string `str`.
*/
char *cap_string(char *str)
{
int i = 0;
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
while (str[i] != '\0')
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ','
|| str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?'
|| str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{'
|| str[i] == '}')
{
i++;
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
}
else
{
i++;
}
}
return (str);
}
