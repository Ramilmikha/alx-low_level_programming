#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase, followed by
 * a new line, using only the putchar function with a maximum of two putchar
 * calls.
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

putchar('\n');

return (0);
}
