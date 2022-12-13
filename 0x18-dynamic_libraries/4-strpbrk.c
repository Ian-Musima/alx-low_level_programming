#include "main.h"
#include <stddef.h>

/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s:string to be evaluated
 *@accept:substring to be checked
 *
 *Description:locates the first occurence in the string s of
 *any of the bytes in the string accept
 *Return:pointer to the byte in s that matches one of the
 *bytes in accept or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}

