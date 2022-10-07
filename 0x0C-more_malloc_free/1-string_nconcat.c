#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings
 *@s1: first string
 *@s2:second string
 *Description: points to newly allocated memmory
 *space, which contains s1, followed by the first
 *n bytes of s2 and null teminated.if n is greater
 *or equal to the length of s2, then use entire
 *string s2.if NULL is passed, treat it as an empty
 *string.
 *@n:number of bytes allocated to the pointer.
 *
 *Return:if function fails return NULL. if not, return
 *pointer to concatenated strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j;
	unsigned int k, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	while (s1[l] != '\0')
		l++;
	while (s2[i] != '\0')
		i++;
	if (n >= i)
		n = i;

	p = malloc(sizeof(char) * (l + i + 1));

	if (p == NULL)
		return (NULL);

	for (j = 0; s1[j] != '\0'; j++)
	{
		p[j] = s1[j];
	}

	for (k = 0; k <= n; k++)
	{
		p[j++] = s2[k];
	}
	return (p);
}
