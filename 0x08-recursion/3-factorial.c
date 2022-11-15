#include "main.h"

/**
 *factorial - calculate factorial
 *@n:number to be calculated
 *
 *Return:factorial or -1 to indicate error
 */
int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
			return (1);
		return (n * factorial(n - 1));

	}
	else
		return (-1);
}
