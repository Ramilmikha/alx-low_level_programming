#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 * Return: A pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int i;

    if (nmemb == 0 || size == 0)
        return (NULL);

    ptr = malloc(nmemb * size);

    if (ptr == NULL)
        return (NULL);

    for (i = 0; i < nmemb * size; i++)
        *((char *)ptr + i) = 0;

    return (ptr);
}

int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    if (a == NULL)
        return (1);

    a[95] = 'H';
    a[96] = 'o';
    a[97] = 'l';
    a[98] = '\0';

    printf("%s\n", a);
    free(a);

    return (0);
}
