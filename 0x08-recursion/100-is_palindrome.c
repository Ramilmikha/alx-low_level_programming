#include "main.h"
/* Function prototype */
int is_palindrome_helper(char *s, int start, int end);
/**
* is_palindrome - Checks if a string is a palindrome.
* @s: The string to be checked.
* Return: 1 if it's a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
int len = strlen(s);
return (is_palindrome_helper(s, 0, len - 1));
}
/**
* Recursive helper function to check a string is a palindrome.
* @s: The string to be checked.
* @start: The start index.
* @end: The end index.
* Return: 1 if it's a palindrome, 0 otherwise.
*/
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (is_palindrome_helper(s, start + 1, end - 1));
}
