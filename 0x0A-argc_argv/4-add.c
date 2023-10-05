#include "main.h"
/**
* is_digit - Checks if a string is a positive number
* @str: The string to check
* Return: 1 if it's a positive number, 0 otherwise
*/
int is_digit(char *str)
{
if (!str || *str == '\0')
return (0);
while (*str)
{
if (!isdigit(*str))
return (0);
str++;
}
return (1);
}
/**
* main - Adds positive numbers
* @argc: The number of arguments
* @argv: An array of arguments
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
int sum = 0;
int i;
for (i = 1; i < argc; i++)
{
if (is_digit(argv[i]))
{
int num = atoi(argv[i]);
if (num >= 0)
sum += num;
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
