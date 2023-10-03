#include "main.h"
#include <stdlib.h>
void free_grid(int **grid, int height)
{
if (grid == NULL || height <= 0)
return;
for (int i = 0; i < height; i++)
{
if (grid[i] != NULL)
{
free(grid[i]);
grid[i] = NULL;
}
}
free(grid);
}
