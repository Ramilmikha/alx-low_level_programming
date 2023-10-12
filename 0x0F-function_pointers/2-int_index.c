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
return i;
}
}
return -1;
}
/**
* is_98 - Checks if an integer is equal to 98
* @elem: The integer to check
*
* Return: 1 if true, 0 if false
*/
int is_98(int elem)
{
return (elem == 98);
}
/**
* is_strictly_positive - Checks if an integer is greater than 0
* @elem: The integer to check
* Return: 1 if true, 0 if false
*/
int is_strictly_positive(int elem)
{
return (elem > 0);
}
/**
* abs_is_98 - Checks if the absolute value of an integer is 98
* @elem: The integer to check
* Return: 1 if true, 0 if false
*/
int abs_is_98(int elem)
{
return (elem == 98 || elem == -98);
}
