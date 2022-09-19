#include "main.h"

/**
 *print_rev - function reverses string
 *@s: string to be reversed
 */
void print_rev(char *s)
{
	int i = 0;

	do {
		i++;

	} while (s[i] != '\0');
	do {
		_putchar(s[i]);
		i--;

	} while (i >= 0);
}
