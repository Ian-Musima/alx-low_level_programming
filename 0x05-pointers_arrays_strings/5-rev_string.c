#include "main.h"

/**
 *rev_string - function reverses string
 *@s: string to be reversed.
 *
 */
void rev_string(char *s)
{
	int i = 0, j = 0, k = 0;

	while (s[i] != '\0')
		i++;

	for (j = i; j >= 0; j--)
	{
		s[k] = s[j];
		k++;

	}
}
