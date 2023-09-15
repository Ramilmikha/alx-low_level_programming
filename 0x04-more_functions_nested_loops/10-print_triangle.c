#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}
int i, j;
for (i = 1; i <= size; i++)
{
for (j = size - i; j > 0; j--)
_putchar(' ');
for (j = 0; j < i; j++)
_putchar('#');
_putchar('\n');
}
}
