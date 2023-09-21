#include "main.h"
/**
* leet - Encodes a string into 1337.
* @str: The input string to encode.
*
* Return: A pointer to the encoded string.
*/
char *leet(char *str)
{
char *s = str;
char leet[] = "aAeEoOtTlL";
char encode[] = "4433007711";
while (*s)
{
int i;
for (i = 0; leet[i]; i++)
{
if (*s == leet[i])
{
*s = encode[i];
break;
}
}
s++;
}
return (str);
}
