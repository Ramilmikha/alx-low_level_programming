#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: If memory allocation fails or if width or height is <= 0, returns NULL.
 * Otherwise, returns a pointer to the allocated grid.
 */
int **alloc_grid(int width, int height)
{
    if (width <= 0 || height <= 0)
        return (NULL);

    int **grid = (int **)malloc(height * sizeof(int *));
    int i, j;

    if (grid == NULL)
        return (NULL);

    for (i = 0; i < height; i++)
    {
        grid[i] = (int *)malloc(width * sizeof(int));

        if (grid[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }

        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}
