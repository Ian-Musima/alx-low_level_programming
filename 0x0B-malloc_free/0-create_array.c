#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *create_array- creates an array of chars
 *and intializes it with a specific char.
 *@size:number of elements
 *@c:character that intializes the array
 *
 *Return:NULL if size = 0 or if it fails
 *or a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = (char *) malloc(size * sizeof(char));

	if (size > 0)
	{
		for (i = 0; i < size; i++)
			p[i] = c;
	}
	else
		return (NULL);
	return (p);
}
