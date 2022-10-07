#include "main.h"
#include <stdlib.h>

/**
 *array_range - creates an array of integers
 *@min:smallest int in the array
 *@max:largest int in the array
 *
 *Return:pointer to the array. NULL if malloc
 *fails or if min > max
 */
int *array_range(int min, int max)
{
	int *p,k = 0;

	if (min > max)
		return (NULL);


	p = malloc(sizeof(*p) * ((max - min) + 1));

	if (p == NULL)
		return (NULL);

	for (; min <= max; min++)
	{
		p[k++] = min;
	}
	return (p);
}
