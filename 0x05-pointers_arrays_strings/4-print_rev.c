#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: A pointer to the string to be printed in reverse.
 */
void print_rev(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
while (length > 0)
{
s--;
_putchar(*s);
length--;
}
_putchar('\n');
}
int main(void)
{
char *str;
str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
print_rev(str);
return (0);
}
