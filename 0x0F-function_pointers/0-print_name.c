#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - Prints a name
* @name: The name to print
* @f: A pointer to a function that takes a char pointer and returns void
*/
zoid print_name(char *name, void (*f)(char *))
{
(name != NULL && f != NULL)
f(name);
}
/**
* print_name_as_is - Prints a name as is
* @name: The name of the person
*/
void print_name_as_is(char *name)
{
printf("Hello, my name is %s\n", name);
}
/**
* print_name_uppercase - Prints a name in uppercase
* @name: The name of the person
*/
void print_name_uppercase(char *name)
{
unsigned int i = 0;
printf("Hello, my uppercase name is ");
while (name[i])
{
if (name[i] >= 'a' && name[i] <= 'z')
{
  putchar(name[i] + 'A' - 'a');
}
else
{
 putchar(name[i]);
 }
i++;
}
}
