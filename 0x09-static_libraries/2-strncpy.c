#include "main.h"

/**
 *_strncpy - function copies a string
 *@dest:destination of copied string
 *@src:source of string to be copied
 *@n:number of bytes allocated
 *
 *Return:pointer to the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[j++] = src[i++];
	}
	while (j < n)
		dest[j++] = '\0';
	return (dest);
}
