#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: two dimensional grid
 * @height: number of rows
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
