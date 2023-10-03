#include <stdlib.h>
#include <stdio.h>
int is_space(char c)
{
return (c == ' ' || c == '\t' || c == '\n');
}
int count_words(char *str)
{
int count = 0;
int in_word = 0;
for (int i = 0; str[i] != '\0'; i++)
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
char *strdup_word(char *str)
{
int len = 0;
while (!is_space(str[len]) && str[len] != '\0')
len++;
char *word = (char *)malloc((len + 1) * sizeof(char));
if (word == NULL)
return NULL;
for (int i = 0; i < len; i++)
word[i] = str[i];
word[len] = '\0';
return word;
}
char **strtow(char *str)
{
if (str == NULL || *str == '\0')
return NULL;
int num_words = count_words(str);
char **words = (char **)malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
return NULL;
int word_index = 0;
int in_word = 0;
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
