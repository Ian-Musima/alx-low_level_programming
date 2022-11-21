#include "main.h"

/**
 *print_triangle - draw triangle
 *@size:number of times # will be printed
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size >= 1)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
