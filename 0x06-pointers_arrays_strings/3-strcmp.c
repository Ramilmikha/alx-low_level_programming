#include "main.h"
/**
* _strcmp - Compares two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: An integer less than, equal to, or greater than zero if s1
*         is found to be less than, equal to, or greater than s2, respectively.
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
if (s1[i] != '\0')
{
return (s1[i]);
}
else if (s2[i] != '\0')
{
return (-s2[i]);
}
return (0);
}
