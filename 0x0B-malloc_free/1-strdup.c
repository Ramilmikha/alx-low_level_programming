#include "main.h"
#include <stdlib.h>
char *_strdup(char *str)
{
if (str == NULL)
return (NULL);
char *duplicate = (char *)malloc(sizeof(char) * (_strlen(str) + 1));
if (duplicate == NULL)
return (NULL);
for (int i = 0; str[i] != '\0'; i++)
duplicate[i] = str[i];
duplicate[_strlen(str)] = '\0';
return (duplicate);
}
