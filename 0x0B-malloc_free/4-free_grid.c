#include "main.h"
/**
  * free_grid - frees memory of two dimensional array
  *
  * @grid: pointer to two dimensional array
  * @height: height of grid
  *
  * Return: nothing
  */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
