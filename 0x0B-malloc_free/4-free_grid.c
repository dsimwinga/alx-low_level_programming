#include "main.h"

/**
 *free_grid - my main function
 *@grid: 1
 *@height: on an array rows
 *Return: NULL
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
