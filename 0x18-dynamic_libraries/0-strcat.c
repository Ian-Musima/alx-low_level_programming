#include "main.h"

/**
 *_strcat - appends src to dest by overwriting the terminating (\0)
 *at the end of string dest and then adds a terminating null byte
 *@dest: string destination
 *@src: string source
 *
 *Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		dest[i] = dest[i];
		i++;

	}

	while (src[j] != '\0')
	{
		dest[i++] = src[j];
		j++;
	}
	return (dest);

}
