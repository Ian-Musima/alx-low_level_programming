#include "main.h"

/**
 * puts2 - print an even no. of characters
 *from a string
 *@s: string to be evaluated
 */
void puts2(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(s[i]);
	}
	_putchar('\n');
}
