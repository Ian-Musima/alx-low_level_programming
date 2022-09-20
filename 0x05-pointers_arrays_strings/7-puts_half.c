#include "main.h"

/**
 *puts_half - prints the second
 * half of a string.
 *@s: string to be evaluated
 */
void puts_half(char *s)
{
	int i = 0, j, new_length;

	while (s[i] != '\0')
		i++;

	new_length = i / 2;

	for (j = new_length; j < i; j++)
		_putchar(s[j]);
	_putchar('\0');
}
