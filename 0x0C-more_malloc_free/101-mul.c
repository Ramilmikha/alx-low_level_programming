#include <stdio.h>
#include <stdlib.h>
/**
* is_digit - Checks if a string contains only digits.
* @str: The string to check.
* Return: 1 if all characters are digits, 0 otherwise.
*/
int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}
/**
* main - Multiplies two positive numbers.
* @argc: The number of command-line arguments.
* @argv: An array of command-line argument strings.
* Return: 0 on success, 98 on error.
*/
int main(int argc, char *argv[])
{
if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return (98);
}
unsigned long num1 = strtoul(argv[1], NULL, 10);
unsigned long num2 = strtoul(argv[2], NULL, 10);
printf("%lu\n", num1 * num2);
return (0);
}
