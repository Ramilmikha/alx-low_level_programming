#include "function_pointers.h"
/**
* int_index - Searches for an integer in an array using a given comparison function
* @array: The array of integers
* @size: The size of the array
* @cmp: A pointer to a function that compares integers
* Return: The index of the first matching element, or -1 if no match or error.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array != NULL && cmp != NULL && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
return (-1);
}
