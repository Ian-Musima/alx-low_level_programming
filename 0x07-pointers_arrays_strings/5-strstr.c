#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack:string to be evaluated
 *@needle:substring to be checked
 *Description:finds the first occurrence of the substring needle in
 *the string haystack
 *Return:pointer to the beginning of the located substring or NULL if the
 *substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i] == '\0')
					return (haystack);
				i++;
			}
		}
		haystack++;
	}
	return (0);
}
