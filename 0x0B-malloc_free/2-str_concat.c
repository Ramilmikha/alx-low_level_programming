#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
* Return: If memory allocation fails or if either s1 or s2 is NULL, returns NULL.
* Otherwise, returns a pointer to the concatenated string.
*/
char *str_concat(char *s1, char *s2)
int len1,int len2,int total_len,int i,int j;
{
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
total_len = len1 + len2;
char *concatenated = (char *)malloc((total_len + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);
for (i = 0; i < len1; i++)
concatenated[i] = s1[i];
for (j = 0; j < len2; j++)
concatenated[i + j] = s2[j];
concatenated[total_len] = '\0';
return (concatenated);
}
