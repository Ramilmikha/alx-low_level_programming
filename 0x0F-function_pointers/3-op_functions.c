#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* op_add - Add two integers
* @a: First integer
* @b: Second integer
* Return: Sum of a and b
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - Subtract two integers
* @a: First integer
* @b: Second integer
* Return: Difference between a and b
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - Multiply two integers
* @a: First integer
* @b: Second integer
* Return: Product of a and b
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div - Divide two integers
* @a: First integer
* @b: Second integer (non-zero)
* Return: Result of division of a by b
*/
int op_div(int a, int b)
{
if (b == 0)
{
 printf("Error\n");
exit(100);
}
return (a / b);
}
/**
* op_mod - Get the remainder of division of two integers
* @a: First integer
* @b: Second integer (non-zero)
* Return: Remainder of division of a by b
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
