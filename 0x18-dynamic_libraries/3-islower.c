#include "main.h"

/**
 *_islower - function checks for lower character
 *@c: the character to be checked
 *
 *
 *Return: 1 if lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
