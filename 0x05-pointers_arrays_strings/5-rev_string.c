#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: A pointer to the string to be reversed.
 */
void rev_string(char *s)
{
int length = 0;
int i;
char temp;
while (s[length] != '\0')
{
length++;
}
for (i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}
int main(void)
{
char s[10] = "My School";
printf("%s\n", s);
rev_string(s);
printf("%s\n", s);
return (0);
}
