#include <stdio.h>
/**
 *main - exclude letters q,e from alphabet print
 *
 *Return:0
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
