#include <stdlib.h>

char *argstostr(int ac, char **av)
{
    if (ac == 0 || av == NULL)
        return (NULL);

    int total_length = 0;
    int i, j;

    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j] != '\0')
        {
            total_length++;
            j++;
        }
        total_length++;  // Add 1 for the newline character
    }

    char *concatenated;
    concatenated = (char *)malloc((total_length + 1) * sizeof(char));
    if (concatenated == NULL)
        return (NULL);

    int pos = 0;
    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j] != '\0')
        {
            concatenated[pos] = av[i][j];
            pos++;
            j++;
        }
        concatenated[pos] = '\n';  // Add a newline character between arguments
        pos++;
    }

    concatenated[pos] = '\0';  // Null-terminate the concatenated string
    return (concatenated);
}
