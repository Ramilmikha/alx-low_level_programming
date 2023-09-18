#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string, or 0 if no valid integer is found.
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;
if (s == NULL)
return 0;
if (s[0] == '-')
{
sign = -1;
i++;
}
for (; s[i] != '\0'; i++)
{
if (s[i] >= '0' && s[i] <= '9')
{
if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
{
if (sign == 1)
return INT_MAX;
else
return INT_MIN;
}
result = result * 10 + (s[i] - '0');
}
else
{
break;
}
}
return (result * sign);
}
