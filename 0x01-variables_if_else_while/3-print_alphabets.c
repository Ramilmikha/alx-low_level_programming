#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase, followed by
 * the alphabet in uppercase, all on a single line, using only the putchar
 * function with a total of three putchar calls.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}

letter = 'A';

while (letter <= 'Z')
{
putchar(letter);
letter++;
}

putchar('\n');

return (0);
}
