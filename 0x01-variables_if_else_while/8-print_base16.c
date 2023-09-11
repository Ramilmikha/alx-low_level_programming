#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all the numbers of base 16 in lowercase,
 * followed by a new line, using only the putchar function with a maximum of
 * three putchar calls.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
char digit = '0';  
while (digit <= '9')
{
putchar(digit);
digit++;
}
digit = 'a';
while (digit <= 'f')
{
putchar(digit);
digit++;
}
putchar('\n');
return (0);
}
