#include "main.h"
/**
 * free_grid -  function that frees a 2 dimensional grid.
 * @grid: int double_pointer
 * @height: int input
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
