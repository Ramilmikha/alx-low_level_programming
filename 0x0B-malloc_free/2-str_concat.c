#include "main.h"
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
int len1 = _strlen(s1);
int len2 = _strlen(s2);
int total_len = len1 + len2;
char *concatenated = (char *)malloc((total_len + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);
for (int i = 0; i < len1; i++)
concatenated[i] = s1[i];
for (int i = 0; i < len2; i++)
concatenated[len1 + i] = s2[i];
concatenated[total_len] = '\0';
return (concatenated);
}
