#include "main.h"

/**
 *cap_string - capitalize all words in a string
 *@s:string to be checked
 *
 *Return: pointer to string
 */
char *cap_string(char *s)
{
	int i = 0, j = 0;
	char cap_after[] = " \t\n,;.!?\"(){}";


	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	while (s[i] != '\0')
	{
		for (j = 0; cap_after[j] != '\0'; j++)
		{
			if (s[i] == cap_after[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
				s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}
