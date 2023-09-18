#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point of the program
 *
 * Description: This function generates a random number and prints a message
 *              based on the value of the last digit of the number.
 *
 * Return: Always 0 (indicating success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
lastDigit = n % 10;

printf("Last digit of %d is ", n);
printf("%d and is ", lastDigit);

if (lastDigit > 5)
{
printf("greater than 5\n");
}
else if (lastDigit == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}
