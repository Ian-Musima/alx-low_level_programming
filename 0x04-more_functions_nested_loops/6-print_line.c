#include "main.h"

/**
 *print_line - draw straight line
 *@n:number of times _ will be printed
 *
 */
void print_line(int n)
{
	int i;

	if (n >= 1)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
