#include "main.h"

/**
 * print_number - prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
    int divisor = 1;
    int is_negative = 0;

    if (n < 0)
    {
        _putchar('-');
        is_negative = 1;
    }

    while (n / divisor > 9 || n / divisor < -9)
        divisor *= 10;

    while (divisor != 0)
    {
        int digit = n / divisor;

        if (is_negative)
            _putchar((digit * -1) + '0');
        else
            _putchar(digit + '0');

        n %= divisor;
        divisor /= 10;
    }
}
