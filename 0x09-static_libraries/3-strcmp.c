#include "main.h"

/**
 *_strcmp - compares two strings character by character
 *@s1:first string in comparison
 *@s2:second string in comparison
 *
 *Return: 0 if strings are equal, >0 if first
 *non-matching character in str1 is greater, <0 if
 *first non-matching character in str1 is lower
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
	{
		;
	}
	return (s1[i] - s2[i]);
}
