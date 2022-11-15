#include "main.h"

/**
 *_pow_recursion -calculate value of x raised to power y
 *@x:number to be raised
 *@y:power to be raised by
 *
 *Return: value or -1 if y < 0.
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 1)
			return (x);
		else if (y == 0)
			return (1);
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (-1);
}
