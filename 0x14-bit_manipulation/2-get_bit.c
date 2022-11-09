#include "main.h"

/**
 *get_bit - find value of a bit at a given index
 *@n:int to be evaluated
 *@index:index to be checked
 *
 *Return:value of bit at index or -1 if an error
 *occurrs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b_value;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	b_value = (n >> index) & 1;

	return (b_value);
}
