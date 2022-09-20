#include "main.h"

/**
 *rev_string - function reverses string
 *@s: string to be reversed.
 *
 */
void rev_string(char *s)
{
	int i = 0, j;

	while (s[i] != '\0')
		i++;

	for (j = i; j >= 0; j--)
	{
		if (s[j] != '\0')
			_putchar(s[j]);
	}
}
