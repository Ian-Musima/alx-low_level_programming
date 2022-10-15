#include "variadic_functions.h"
#include <stdarg.h>

/**
 *print_all - print anything
 *@format:list of types of arguments passed to the function
 *c: char
 *i: integer
 *f:float
 *s:char *
 *
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list args;
	va_start(args, format);

	while (format[i])
	{
		i++;
	}

	while(j < i)
	{
		if ()
	}


}
