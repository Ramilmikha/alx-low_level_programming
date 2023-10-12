#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - Prints anything based on a format.
* @format: A string that specifies the format of the arguments.
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *separator = "";
char *str;
va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, (float)va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
break;
}
separator = ", ";
i++;
}
printf("\n");
va_end(args);
}
