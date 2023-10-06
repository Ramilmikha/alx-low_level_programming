#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: Minimum value.
 * @max: Maximum value.
 * Return: A pointer to the newly created array.
 */
int *array_range(int min, int max)
{
    int *arr;
    int size, i;

    if (min > max)
        return (NULL);

    size = max - min + 1;
    arr = malloc(size * sizeof(int));

    if (arr == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        arr[i] = min++;

    return (arr);
}

int main(void)
{
    int *a;
    int i;

    a = array_range(0, 10);
    if (a == NULL)
        return (1);

    for (i = 0; i <= 10; i++)
        printf("%d\n", a[i]);

    free(a);

    return (0);
}
