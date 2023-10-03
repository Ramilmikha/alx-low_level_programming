#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: If memory allocation fails or if either s1 or s2 is NULL, returns NULL.
 * Otherwise, returns a pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
    int len1 = 0, len2 = 0, i, j, total_len;
    char *concatenated;

    if (s1 != NULL)
    {
        while (s1[len1] != '\0')
            len1++;
    }

    if (s2 != NULL)
    {
        while (s2[len2] != '\0')
            len2++;
    }
total_len = len1 + len2;

    concatenated = (char *)malloc((total_len + 1) * sizeof(char));

    if (concatenated == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        concatenated[i] = s1[i];

    for (j = 0; j < len2; j++)
        concatenated[len1 + j] = s2[j];

    concatenated[total_len] = '\0';

    return (concatenated);
}
