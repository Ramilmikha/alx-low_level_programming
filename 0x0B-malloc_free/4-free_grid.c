#include "main.h"
#include <stdlib.h>
/**
* free_grid - Frees a 2D grid previously created by alloc_grid function.
* @grid: A pointer to the 2D grid.
* @height: The height of the grid.
* This function frees the memory allocated for a 2D grid and all of its elements.
* It also sets the elements to NULL to avoid any double freeing of memory.
*/
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
return;
for (i = 0; i < height; i++)
{
if (grid[i] != NULL)
{
free(grid[i]);
grid[i] = NULL;
}
}
free(grid);
}
