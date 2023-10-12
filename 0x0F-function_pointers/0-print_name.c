#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - Prints a name
* @name: The name to print
* @f: A pointer to a function that takes a char pointer and returns void
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
