#include <stdio.h>
/**
 *main - exclude letters q,e from alphabet print
 *
 *Return:0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (!(i == 101 || i == 113))
			putchar(i)
	}
	putchar('\n');
	return (0);
}
