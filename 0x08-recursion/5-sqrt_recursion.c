#include "main.h"
/**
* _sqrt_recursion - Returns the natural square root of a number, recursively.
* @n: The number to find the square root of.
* Return: The square root of n, or -1 if it doesn't have a natural square root.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return -1;
if (n == 0 || n == 1)
return n;
return find_sqrt(n, 1);
}
/**
* find_sqrt - Helper function to find the square root recursively.
* @n: The number to find the square root of.
* @guess: The current guess for the square root.
* Return: The square root of n, or -1 if it doesn't have a natural square root.
*/
int find_sqrt(int n, int guess)
{
if (guess * guess == n)
return guess;
if (guess * guess > n)
return -1;
return find_sqrt(n, guess + 1);
}
