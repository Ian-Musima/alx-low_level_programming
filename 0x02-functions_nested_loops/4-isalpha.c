#include "main.h"

/**
 *_isalpha - function checks for alphabet character
 *@c: the character to be checked
 *
 *
 *Return: 1 if c is a letter, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
