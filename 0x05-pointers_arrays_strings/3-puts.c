#include "main.h"
/**
 * _puts - Prints a string followed by a new line.
 * @str: A pointer to the string to be printed.
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
int main(void)
{
char *str;
str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
_puts(str);
return (0);
}
