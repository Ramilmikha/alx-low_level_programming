#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int n;

    /* Initialize random seed */
srand(time(0));

    /* Generate a random number between -2147483648 and 2147483647 */
n = rand() % 2147483647 - 2147483648;

printf("%d is ", n);

if (n > 0)
{
printf("positive\\n");
}
else if (n == 0)
{
printf("zero\\n");
}
else
{
printf("negative\\n");
}

return (0);
}
