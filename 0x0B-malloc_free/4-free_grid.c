#include "main.h"
#include <stdlib.h>
int i, **grid, height;
void free_grid(**grid,height)
{
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
