#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - returns a pointer to a
 * 2-D array of integers.
 *@width:number of columns
 *@height:number of rows
 *Descrription: each element in the grid
 *will be intialized to 0.
 *Return: NULL if width or height is
 *0 or negative or on failure.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **) malloc(height * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = (int *) malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			free(p);
			for (j = 0; j <= i; j++)
				free(p[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
