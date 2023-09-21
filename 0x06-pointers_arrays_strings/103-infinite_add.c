#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result (r) or 0 if the result cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1, len2, carry, sum, max_len, i;
for (len1 = 0; n1[len1]; len1++)
;
for (len2 = 0; n2[len2]; len2++)
;
if (len1 >= len2)
max_len = len1 + 1;
else
max_len = len2 + 1;
if (size_r < max_len + 1)
return (0);
carry = 0;
for (i = 0; i < max_len; i++)
{
if (i >= len1)
sum = (n2[len2 - 1 - (i - len1)] - '0') + carry;
else if (i >= len2)
sum = (n1[len1 - 1 - (i - len2)] - '0') + carry;
else
sum = (n1[len1 - 1 - (i - len2)] - '0') + (n2[len2 - 1 - (i - len1)] - '0') + carry;
carry = sum / 10;
r[i] = (sum % 10) + '0';
}
if (carry == 1)
{
r[max_len] = '1';
r[max_len + 1] = '\0';
}
else
{
r[max_len] = '\0';
}
for (i = 0; i < max_len / 2; i++)
{
char tmp = r[i];
r[i] = r[max_len - 1 - i];
r[max_len - 1 - i] = tmp;
}
return (r);
}
