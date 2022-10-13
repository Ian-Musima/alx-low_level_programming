#include <stddef.h>
#include "function_pointers.h"

/**
 *int_index - seacrches for an integer
 *@array:an array of integers
 *@size:number of elements
 *@cmp:pointer to the function
 *
 *Return:index of the element for which
 *the cmp function doesn't return 0. if no element
 *matches, return -1. if size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array && cmp && size)
	{
		while (i < size)
		{
			if (cmp((array[i])))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
