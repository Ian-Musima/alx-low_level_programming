#include "main.h"

/**
 *_strncat - appends src to dest by overwriting the terminating (\0)
 *at the end of string dest and then adds a terminating null byte
 *@dest: string destination
 *@src: string source
 *@n: number of bytes to print
 *Description:it will use at most n bytes from src and src doesn't
 *need to be null-terminated if it contains n or more bytes.
 *Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		dest[i] = dest[i];
		i++;

	}

	while (src[j] != '\0' && j < n)
	{
		dest[i++] = src[j];
		j++;

	}
	return (dest);

}
