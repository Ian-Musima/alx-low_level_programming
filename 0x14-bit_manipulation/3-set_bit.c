#include "main.h"

/**
 *set_bit - sets value of a bit to 1 at a given index
 *@n:int to be evaluated
 *@index:index to be set to 1
 *
 *Return:1 if successul, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = ((1UL << index) | *n);

	return (1);
}
