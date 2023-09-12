#include <stdio.h>
/**
* main - entry point
*
* Return: Always 0
*/
int main(void)
{
unsigned long int a = 1, b = 2, temp;
int count;
printf("%lu, %lu, ", a, b);
for (count = 2; count < 98; count++)
{
temp = a + b;
printf("%lu", temp);
if (count != 97)
printf(", ");
a = b;
b = temp;
}
printf("\n");
return (0);
}
