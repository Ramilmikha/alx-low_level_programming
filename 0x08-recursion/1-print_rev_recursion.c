#include "main.h"
#include <unistd.h>
/**
* _print_rev_recursion - Prints a string in reverse, recursively.
* @s: The string to be printed in reverse.
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;
_print_rev_recursion(s + 1);
putchar(*s);
}
