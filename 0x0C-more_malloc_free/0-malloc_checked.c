#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocates memory using malloc
 *@b:number of bytes allocated
 *Description: if malloc fails, malloc_checked 
 *causes normal process termination with a
 *status value of 98
 *
 *Return:a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit (98);
	else
		return (p);
}
