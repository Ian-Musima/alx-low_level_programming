#include "main.h"

/**
 *_sqrt_recursion -returns the natural square root of a number
 *@n:number to be evaluated
 *
 *Return:natural square root or -1 incase of error
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n >= 0)
	{
		return (_sqrt(n, i));
	}
	else
		return (-1);
}

/**
 *_sqrt - calculates the square root
 *@n:number to be evaluated
 *@i:possible square root
 *
 *Return: square root
 */
int _sqrt(int n, int i)
{
	if ((i * i) == n)
		return (i);
	if ((i * i) > n)
		return (-1);
	return (_sqrt(n, i + 1));
}
