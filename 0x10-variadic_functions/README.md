1 sum_them_all:
Description: This function calculates the sum of a variable number of integer arguments.
Parameters:
n: The number of integer arguments to be summed.
...: A variable number of integer arguments.
Return Value: The sum of all the integer arguments.

2 print_numbers:
Description: This function prints a variable number of integer arguments, separated by a specified separator string.
Parameters:
separator: The string used to separate the printed integers.
n: The number of integer arguments to be printed.
...: A variable number of integer arguments.
Output: The function prints the integers separated by the provided separator.

3 print_strings:
Description: This function prints a variable number of string arguments, separated by a specified separator string.
It also handles NULL strings and prints "(nil)" for them.
Parameters:
separator: The string used to separate the printed strings.
n: The number of string arguments to be printed.
...: A variable number of string arguments.
Output: The function prints the strings separated by the provided separator, and it replaces NULL strings with "(nil)".

4 print_all:
Description: This function prints values of different types based on a format string. It supports characters (c), integers (i),
floating-point numbers (f), and strings (s). It also handles NULL strings and prints "(nil)" for them.
Parameters:
format: A string that specifies the format of the arguments to be printed.
...: A variable number of arguments of different types based on the format.
Output: The function prints the values of the specified types according to the format string, separated by commas and a space.
