#include "main.h"
#include <stdlib.h>
/**
* free_grid - frees a 2 dimensional grid
* @grid: the grid
* @height: height of the grid
*/
void free_grid(int **grid, int height)
{
int x;
if (grid == NULL)
{
return;
}
for (x = 0; x < height; x++)
{
if (grid[x] != NULL)
{
free(grid[x]);
}
}
free(grid);
}
