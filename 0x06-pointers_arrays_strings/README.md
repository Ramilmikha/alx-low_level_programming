### Exercise 0: strcat
- Prototype: `char *_strcat(char *dest, char *src);`
- Description: This function concatenates two strings. It appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte.
- Returns: A pointer to the resulting string `dest`.

### Exercise 1: strncat
- Prototype: `char *_strncat(char *dest, char *src, int n);`
- Description: This function is similar to `_strcat`, but it appends at most `n` bytes from `src` to `dest`. `src` does not need to be null-terminated if it contains `n` or more bytes.
- Returns: A pointer to the resulting string `dest`.

### Exercise 2: strncpy
- Prototype: `char *_strncpy(char *dest, char *src, int n);`
- Description: This function copies a string from `src` to `dest`, but it copies at most `n` characters from `src`.
- Returns: A pointer to the resulting string `dest`.

### Exercise 3: strcmp
- Prototype: `int _strcmp(char *s1, char *s2);`
- Description: This function compares two strings `s1` and `s2` and returns an integer value representing their relationship (similar to the `strcmp` function in the standard library).
- Returns: An integer less than, equal to, or greater than zero, depending on whether `s1` is less than, equal to, or greater than `s2`.

### Exercise 4: reverse_array
- Prototype: `void reverse_array(int *a, int n);`
- Description: This function reverses the content of an array of integers `a` with `n` elements.

### Exercise 5: string_toupper
- Prototype: `char *string_toupper(char *str);`
- Description: This function changes all lowercase letters in the string `str` to uppercase.

### Exercise 6: cap_string
- Prototype: `char *cap_string(char *str);`
- Description: This function capitalizes the first letter of each word in the string `str`, where words are separated by various punctuation and whitespace characters.

### Exercise 7: leet
- Prototype: `char *leet(char *str);`
- Description: This function encodes a string `str` into "1337 speak" by replacing specific characters with their corresponding numbers.
