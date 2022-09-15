#include "main.h"
/**
 *print_alphabet_x10 - print alphabet in lowercase 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i, j = 0;

	while (j < 10)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
