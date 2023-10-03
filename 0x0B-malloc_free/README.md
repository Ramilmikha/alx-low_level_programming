### Task 0: Float like a butterfly, sting like a bee
- Function: `char *create_array(unsigned int size, char c);`
- Description: This function creates an array of characters and initializes it with a specific character `c`.
-  The size of the array is determined by the `size` parameter.
- Returns: A pointer to the newly created array or `NULL` if it fails.

### Task 1: The woman who has no imagination has no wings
- Function: `char *_strdup(char *str);`
- Description: This function returns a pointer to a newly allocated space in memory, containing a copy of the input
-  string `str`. It uses `malloc` for memory allocation.
- Returns: A pointer to the duplicated string or `NULL` if it fails.

### Task 2: He who is not courageous enough to take risks will accomplish nothing in life
- Function: `char *str_concat(char *s1, char *s2);`
- Description: This function concatenates two strings `s1` and `s2` and returns a newly allocated string containing the
- concatenated result.
- Returns: A pointer to the concatenated string or `NULL` if it fails.

### Task 3: If you even dream of beating me, you'd better wake up and apologize
- Function: `int **alloc_grid(int width, int height);`
- Description: This function returns a pointer to a 2-dimensional array of integers with dimensions `width` and `height`.
- Each element of the grid is initialized to `0`.
- Returns: A pointer to the allocated grid or `NULL` if it fails.

### Task 4: It's not bragging if you can back it up
- Function: `void free_grid(int **grid, int height);`
- Description: This function frees a 2-dimensional grid previously created by the `alloc_grid` function. It also frees
- the memory allocated for the individual rows.
- Returns: Nothing.

### Task 5: It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe
- Function: `char *argstostr(int ac, char **av);`
- Description: This function concatenates all the arguments of your program (provided as `av`), each followed by a newline
- character, into a single string.
- Returns: A pointer to the concatenated string or `NULL` if it fails.

### Task 6: I will show you how great I am
- Function: `char **strtow(char *str);`
- Description: This function splits a string `str` into words, where words are separated by spaces, tabs, or newline
- characters. It returns an array of strings containing the individual words.
- Returns: A pointer to an array of strings or `NULL` if it fails.
