#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - sums all of its parameters.
 *@n:number of integers to be sumed.
 *
 *Return:sum.if n==0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int j = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);


	for (i = 0; i < n; i++)
	{
		j += va_arg(args, int);
	}
	va_end(args);

	return (j);
}
