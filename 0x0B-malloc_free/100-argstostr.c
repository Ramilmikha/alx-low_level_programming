#include <stdlib.h>
char *argstostr(int ac, char **av)
{
int total_length, i, j,  pos;
char *concatenated;
if (ac == 0 || av == NULL)
return (NULL);
total_length = 0;
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
*concatenated = (char *)malloc((total_length + 1) * sizeof(char));
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
}
concatenated[pos] = '\0';
return (concatenated);
}
