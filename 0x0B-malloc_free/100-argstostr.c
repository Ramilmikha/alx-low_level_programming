#include <stdlib.h>
/**
* argstostr - Concatenates an array of strings into a single string.
* @ac: The number of strings in the array.
* @av: An array of strings to be concatenated.
* Return: A pointer to a newly allocated string containing the concatenated
*strings, separated by newline characters ('\n'). Returns NULL if
*ac is 0, av is NULL, or if memory allocation fails.
*/
char *argstostr(int ac, char **av)
{
int i, j;
char *concatenated;
int pos = 0;
int total_length = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
total_length++;
j++;
}
total_length++;
}
concatenated = (char *)malloc((total_length + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);
pos = 0;
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
concatenated[pos] = av[i][j];
pos++;
j++;
}
concatenated[pos] = '\n';
pos++;
}
concatenated[pos] = '\0';
return (concatenated);
}
