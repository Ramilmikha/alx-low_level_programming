#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point of the program
*
* This function generates a random number and prints whether it's positive,
* zero, or negative.
*
* Return: Always 0 (indicating success)
*/
int main(void)
{
int n;

/* Initialize random seed */
srand(time(0));
n = rand() - RAND_MAX / 2;


printf("%d is ", n);
if (n > 0)
{
printf("positive\n");
}
else if (n == 0)
{
printf("zero\n");
}
else
{
printf("negative\n");
}

return (0);
}
