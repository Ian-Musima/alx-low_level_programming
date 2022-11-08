#include "main.h"

/**
 *binary_to_uint - convert binary number to unsigned int
 *@b:string containing 0s and 1s
 *
 *Return: converted number. 0 if b is NULL or if one more characters
 *in string b is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u_int = 0;
	int i = 0;

	if (!b)
		return (0);
	for (; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		u_int = 2 * u_int + (b[i] - '0');
	}
	return (u_int);
}
