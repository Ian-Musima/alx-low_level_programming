#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - prints strings
 *@separator:string to be printed between strings
 *@n:number of strings passed to the function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list args;

	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);
		if (s == NULL)
			printf("(nil)");
		printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}