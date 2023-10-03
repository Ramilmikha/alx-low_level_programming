#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _strdup - Duplicate a string.
* @str: The string to duplicate.
* Return: If str is NULL or memory allocation fails, returns NULL.
* Otherwise, returns a pointer to the duplicated string.
*/
char *_strdup(char *str)
{
char *duplicate;
int length;
int i;
if (str == NULL)
return (NULL);
length = strlen(str);
duplicate = (char *)malloc(sizeof(char) * (length + 1));
if (duplicate == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
duplicate[i] = str[i];
duplicate[length] = '\0';
return (duplicate);
}
