#include "main.h"

/**
 *leet - encode a string into leet
 *@s: string to be encoded
 *Descrption - only the letters A,E,O,T,L are
 *replaced with leet characters
 *
 *Return:the encoded string
 */
char *leet(char *s)
{
	char *letters = "AaEeOoTtLl";
	char *leet_code = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
				s[i] = leet_code[j];
		}
	}
	return (s);
}
