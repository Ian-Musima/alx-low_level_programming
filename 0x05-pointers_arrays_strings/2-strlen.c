#include "main.h"

/**
 *_strlen - calculate lenght of string
 *@s: string to be calculated
 *
 *Return: lenght of string
 */
int _strlen(char *s)
{
	int i = 0;

	do 
	{
		i++;
	}
	while (s[i] != '\0');
	return (i);
}
