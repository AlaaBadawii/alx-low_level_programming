#include "main.h"
/**
 * free_grid -  function that frees a 2 dimensional grid.
 * @grid: int double_pointer
 * @height: int input
 */
void free_grid(int **grid, int height)
{
	int i, j;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
	{
		for (j = height - 1; j <= 0; j--)
		{
			free(grid[j]);
		}
		free(grid);
	}
}
