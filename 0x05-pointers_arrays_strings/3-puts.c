#include "main.h"

/**
 *_puts - function similar to puts
 *@str: string to be printed.
 */
void _puts(char *str)
{
	int i = 0;

	do {
		_putchar(*str);
		str++;

	} while (str[i] != '\0');
	_putchar('\n');
}
