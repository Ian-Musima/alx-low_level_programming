#include "main.h"

/**
 *_strcpy - function copies the string
 *pointed by src, including the
 *terminating null byte to the buffer
 *pointed by dest
 *@dest:where string will concatenate to
 *@src:string source
 *
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (src[i] != 0)
		i++;

	for (j = 0; j < i; j++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
