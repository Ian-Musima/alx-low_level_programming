#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s:the string to be evaluated
 *@accept:the substring to be checked
 *
 *Return: the number of bytes in the intial
 *segment of s which consist only of bytes
 *from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		i++;
		for (j = 0; s[i] == accept[j]; j++)
			;
	}
	return (j);
}
