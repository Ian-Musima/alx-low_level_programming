#include "main.h"
#include <stdlib.h>

/**
 *_strdup - returns pointer to a newly allocated
 *space in memory, which contains a copy of the
 *string as a parameter.
 *@str: string to be copied
 *
 *Return: pointer to duplicated string,
 *NULL if available memory is insufficient or
 *if str = NULL.
 */
char *_strdup(char *str)
{
	int i = 0, j;
	char *p;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		i++;
	}

	p = (char *) malloc((i + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		p[j] = *(str + j);
	}
	return (p);
}
