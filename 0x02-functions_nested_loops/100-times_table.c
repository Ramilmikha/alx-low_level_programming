#include "main.h"
#include <stdio.h>
/**
* print_times_table - prints the n times table, starting with 0
* @n: the times table to print
*/
void print_times_table(int n)
{
int row, column, result;
if (n < 0 || n > 15)
return;
for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
result = row * column;
if (column == 0)
printf("%d", result);
else
printf(", %3d", result);
}
printf("\n");
}
}
