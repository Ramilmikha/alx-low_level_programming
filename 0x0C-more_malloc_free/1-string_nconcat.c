#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to concatenate from s2.
 * Return: A pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1 = 0, len2 = 0;
    char *result;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    if (n >= len2)
        n = len2;

    result = malloc(len1 + n + 1);

    if (result == NULL)
        return (NULL);

    for (unsigned int i = 0; i < len1; i++)
        result[i] = s1[i];
    for (unsigned int i = 0; i < n; i++)
        result[i + len1] = s2[i];

    result[len1 + n] = '\0';

    return (result);
}

int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);

    return (0);
}
