#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - Executes a function on each element of an array
* @array: The array of integers
* @size: The size of the array
* @action: A pointer to a function that takes an integer and returns void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}

printf("%d\n", elem);
}
/**
* print_elem_hex - Prints an integer in hexadecimal
* @elem: The integer to print
*/
void print_elem_hex(int elem)
{
printf("0x%x\n", elem);
}
