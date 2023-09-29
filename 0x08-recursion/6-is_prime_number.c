#include "main.h"
/**
* is_prime_number - Checks if a number is prime, recursively.
* @n: The number to be checked.
* Return: 1 if n is prime, 0 otherwise.
*/
int is_prime_number(int n)
{
if (n <= 1) // Non-prime cases
return 0;
if (n <= 3) // Prime cases: 2 and 3
return 1;
return check_prime(n, 2); // Start checking divisors from 2
}
/**
* check_prime - Helper function to check if a number is prime recursively.
* @n: The number to be checked.
* @divisor: The current divisor to check.
* Return: 1 if n is prime, 0 otherwise.
*/
int check_prime(int n, int divisor)
{
if (divisor * divisor > n) // Checked all possible divisors
return 1;
if (n % divisor == 0) // Found a divisor, not prime
return 0;
return check_prime(n, divisor + 1); // Recursively check the next divisor
}
