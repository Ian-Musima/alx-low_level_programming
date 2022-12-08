#include "main.h"
#include <string.h>

/**
 *_strlen - calculate lenght of string
 *@s: string to be calculated
 *
 *Return: lenght of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
