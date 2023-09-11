#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This function generates a random number and prints the last digit along with
 * a message depending on the value of the last digit.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
int n;
int lastDigit;

	/* Initialize random seed */
srand(time(0));

	/* Generate a random number */
n = rand() - RAND_MAX /2;

printf("Last digit of %d is ", n);

lastDigit = n % 10; /* Get the last digit */

if (lastDigit > 5)
{
printf("%d and is greater than 5\n", lastDigit);
}
else if (lastDigit == 0)
{
printf("%d and is 0\n", lastDigit);
}
else
{
printf("%d and is less than 6 and not 0\n", lastDigit);
}

return (0);
}
