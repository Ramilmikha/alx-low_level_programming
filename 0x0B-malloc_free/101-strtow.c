#include <stdlib.h>
/**
* is_space - Checks if a character is a space, tab, or newline.
* @c: The character to check.
* Return: 1 if the character is a space, tab, or newline, 0 otherwise.
*/
char *word;
int i, num_words, word_index;
int is_space(char c)
{
return (c == ' ' || c == '\t' || c == '\n');
}
/**
* count_words - Counts the number of words in a string.
* A word is defined as a sequence of non-space characters.
* @str: The input string.
* Return: The number of words in the string.
*/
int count_words(char *str)
{
int count = 0;
int in_word = 0;
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (is_space(str[i]))
{
 in_word = 0;
}
else if (!in_word)
{
in_word = 1;
count++;
}
}
return count;
}
/**
* strdup_word - Copies a word from a string into a new dynamically allocated string.
* A word is defined as a sequence of non-space characters.
* @str: The input string.
* Return: A pointer to the newly allocated word, or NULL on failure.
*The caller is responsible for freeing the memory.
*/
char *strdup_word(char *str)
{
int len = 0;
while (!is_space(str[len]) && str[len] != '\0')
len++;
*word = (char *)malloc((len + 1) * sizeof(char));
if (word == NULL)
return NULL;
for (i = 0; i < len; i++)
word[i] = str[i];
word[len] = '\0';
return word;
}
/**
* strtow - Splits a string into words.
* A word is defined as a sequence of non-space characters.
* @str: The input string to split.
* Return: An array of strings (words), where the last element is NULL.
*Returns NULL if the input string is NULL, empty, or if memory allocation fails.
*The caller is responsible for freeing the memory of both the array and its elements.
*/
char **strtow(char *str)
{
if (str == NULL || *str == '\0')
return NULL;
num_words = count_words(str);
char **words = (char **)malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
return NULL;
word_index = 0;
in_word = 0;
for (int i = 0; str[i] != '\0'; i++)
{
if (is_space(str[i]))
{
in_word = 0;
}
else if (!in_word)
{
in_word = 1;
words[word_index] = strdup_word(str + i);
if (words[word_index] == NULL)
{
for (int j = 0; j < word_index; j++)
 free(words[j]);
free(words);
return NULL;
}
word_index++;
}
}
words[num_words] = NULL;
return words;
}
