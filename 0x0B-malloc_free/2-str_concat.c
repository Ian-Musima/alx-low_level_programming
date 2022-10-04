#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2:second string
 *
 *Return:NULL on failure. if NULL is passed,
 *treat it as an empty string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k, l;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i) != '\0')
		i++;

	while (*(s2 + j) != '\0')
		j++;

	p = (char *) malloc((i + j + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		p[k] = s1[k];
	}

	for (l = 0; k < (i + j); l++)
	{
		p[k++] = s2[l];
	}
	return (p);
}
