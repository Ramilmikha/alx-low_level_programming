#include "main.h"

/**
 * main - Calculates the minimum number of coins for change
 * @argc: The number of arguments
 * @argv: An array of arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    int cents = atoi(argv[1]);

    if (cents < 0)
    {
        printf("0\n");
        return (0);
    }

    int coins[] = {25, 10, 5, 2, 1};
    int numCoins = 0;

    for (int i = 0; i < 5; i++)
    {
        while (cents >= coins[i])
        {
            cents -= coins[i];
            numCoins++;
        }
    }

    printf("%d\n", numCoins);
    return (0);
}
