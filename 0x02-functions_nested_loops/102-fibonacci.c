#include <stdio.h>
/**
* main - entry point
*
* Return: Always 0
*/
int main(void)
{
long int a = 1, b = 2, temp;
int count;
printf("%ld, %ld, ", a, b);
for (count = 2; count < 50; count++)
{
temp = a + b;
printf("%ld", temp);
if (count != 49)
printf(", ");
a = b;
b = temp;
}
printf("\n");
return (0);
}
