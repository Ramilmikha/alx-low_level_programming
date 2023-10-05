#include "main.h"

/**
 * main - Prints the program name
 * @argc: The number of arguments
 * @argv: An array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    if (argc > 0)
        printf("%s\n", argv[0]);
    return (0);
}
