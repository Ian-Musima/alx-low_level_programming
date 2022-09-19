#include "main.h"

/**
 *_puts - function similar to puts
 *@str: string to be printed.
 */
void _puts(char *str)
{
	int i = 0;

	do {
		_putchar(str[i]);
		i++;

	} while (str[i] != '\0');
	_putchar('\n');
}
