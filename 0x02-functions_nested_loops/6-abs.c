#include "main.h"

/**
 *_abs - function computes the absolute value of an integer
 *@int: the integer to be computed
 *
 *Return: Always 0
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i *= -1);
	}
	else
		return (i);
}
