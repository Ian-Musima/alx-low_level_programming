#include "main.h"

/**
 *_puts - function similar to puts
 *@str: string to be printed.
 */
void _puts(char *str)
{

	do {
		_putchar(*str);
		str++;

	} while (*str != '\0');
	_putchar('\n');
}
