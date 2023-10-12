Task #0 - Function that prints a name:
In this task, you are asked to create a function named print_name that takes two parameters: a string name and a function
pointer f that takes a character pointer. The print_name function is designed to execute the function pointed to by f and
pass the name to it. The task also provides two example functions: print_name_as_is and print_name_uppercase, which respectively.

Task #1 - Function that executes a function on an array:
For this task, you are required to create a function named array_iterator that takes three parameters: an integer array array, its size, and a function pointer action that takes an integer as an argument. The function array_iterator is responsible for applying the function pointed to by action to each element in the array. Two example functions are provided: print_elem and print_elem_hex, which respectively print the integer element and its hexadecimal representation. The array_iterator function allows you to apply one of these functions to each element of an integer array.

Task #2 - Function that searches for an integer:
In this task, you are tasked with creating a function called int_index. This function takes an integer array array, its size size, and a function pointer cmp that takes an integer as an argument. The goal of this function is to search for an element in the array using the function pointed to by cmp. It returns the index of the first element for which the comparison function does not return 0.
If no match is found or if the size is less than or equal to 0, the function returns -1. You are also provided with three comparison functions: is_98, is_strictly_positive, and abs_is_98, which respectively check if an element is equal to 98, strictly positive, or has an absolute value of 98.

Task #3 - Program that performs simple operations:
In this task, you are asked to create a program that performs basic arithmetic operations. The program should take three command-line arguments: two integers (num1 and num2) and an operator (+, -, *, /, %). The program should use function pointers to select the
appropriate operation based on the provided operator. The result of the operation should be printed, followed by a new line. The program must handle various error cases, including incorrect argument count, invalid operators, and division/modulo by zero. You are also required to create separate functions for each operation (addition, subtraction, multiplication, division, and modulo) and a function to select the appropriate operation based on the operator.

Task #4 - Program that prints opcodes:
For this task, you are to create a program that prints the opcodes of its own main function. The program takes one command-line argument, which specifies the number of bytes of opcodes to print. It retrieves the opcodes from its own main function and prints them in hexadecimal format. The program should handle various error cases, including incorrect argument count and negative byte count. You can use this program to examine the opcodes of your main function for self-analysis and debugging.
