#include "main.h"

/**
 *print_rev - function reverses string
 *@s: string to be reversed
 */
void print_rev(char *s)
{
	int i = 0, j;

	while (s[i] != '\0')
		i++;
	for (j = i; j >= 0; j--)
		if (s[j] != '\0')
			_putchar(s[j]);
	_putchar('\n');
}
