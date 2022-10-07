#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocate memory for an array, using malloc.
 *@nmemb: number of elements.
 *@size:size in bytes of each element.
 *
 *Return:pointer to allocated memory. NULL if malloc fails
 *or if either of the parameters is equal to 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(sizeof(size) * nmemb);

	if (p == NULL)
		return (NULL);
	return (p);
}
