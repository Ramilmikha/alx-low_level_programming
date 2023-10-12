#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - Prints strings separated by a separator.
* @separator: The string used to separate strings.
* @n: The number of strings.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;
va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(args);
}

