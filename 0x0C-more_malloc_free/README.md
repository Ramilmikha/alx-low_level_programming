Task 0: malloc_checked
This task requires you to write a function malloc_checked that allocates memory using malloc. If malloc fails, 
it should cause the program to terminate with a status value of 98. You can use the malloc function to allocate memory and 
check if the return value is NULL to handle allocation failure.

Task 1: string_nconcat
In this task, you need to implement a function string_nconcat that concatenates two strings. The function should return a 
pointer to the newly allocated space in memory. Ensure that you handle cases where n is greater or equal to the length of s2
and where NULL is passed as one of the strings.

Task 2: _calloc
You are required to write a function _calloc that allocates memory for an array using malloc. The memory should be initialized 
to zero. Handle cases where nmemb or size is 0, and also check for allocation failure using malloc.

Task 3: array_range
This task involves writing a function array_range that creates an array of integers containing values from min to max, 
inclusive. Ensure you handle cases where min is greater than max and also check for allocation failure using malloc.

Task 4: _realloc (Advanced)
You need to implement a function _realloc that reallocates a memory block using malloc and free. It should copy the contents 
from the old memory block to the new one and handle various cases like resizing, freeing, or returning NULL.

Task 5: Multiplying Two Numbers (Advanced)
This task requires you to write a program that multiplies two positive numbers passed as command-line arguments. You'll need
to validate the arguments, perform the multiplication, and print the result. Handle cases where the arguments are not valid 
numbers.
