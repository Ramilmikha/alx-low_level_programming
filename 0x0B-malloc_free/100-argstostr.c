#include <stdlib.h>
char *argstostr(int ac, char **av)
{
if (ac == 0 || av == NULL)
return (NULL);
int total_length = 0;
for (int i = 0; i < ac; i++)
{
int j = 0;
while (av[i][j] != '\0')
{
total_length++;
j++;
}
total_length++;
}
char *concatenated = (char *)malloc((total_length + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);
int pos = 0;
for (int i = 0; i < ac; i++)
{
int j = 0;
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
