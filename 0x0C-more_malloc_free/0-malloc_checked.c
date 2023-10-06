#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);
    if (ptr == NULL)
    {
        exit(98);
    }
    return (ptr);
}

int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    i = malloc_checked(sizeof(int) * 402);
    f = malloc_checked(sizeof(float) * 100000000);
    d = malloc_checked(sizeof(double) * 100);
    
    free(c);
    free(i);
    free(f);
    free(d);

    return (0);
}
