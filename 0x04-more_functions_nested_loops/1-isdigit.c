#include "main.h"

/**
 *_isdigit - checks if character is a digit
 *@c:character to be evaluated
 *
 *Return:1 if c is a digit or 0 if not
 */
int _isdigit(int c)
{
	if (c <= '0' && c <= '9')
		return (1);
	else
		return (0);
}
