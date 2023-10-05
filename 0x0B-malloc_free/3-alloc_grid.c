#include "main.h"
/**
 * alloc_grid -  function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: int input
 * @height: int input
 * Return: return NULL on failure
 * If width or height is 0 or negative, return NULL
 * a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i, j, l;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int*) * height);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			for (l = i - 1; l >= 0; l--)
			{
				free(ptr[l]);
			}
			free(ptr);
	
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
