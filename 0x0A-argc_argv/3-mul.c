#include "main.h"

/**
 * main - Multiplies two numbers
 * @argc: The number of arguments
 * @argv: An array of arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int result = num1 * num2;

    printf("%d\n", result);
    return (0);
}
