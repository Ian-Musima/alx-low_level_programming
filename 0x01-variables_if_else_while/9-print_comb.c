#include <stdio.h>
/**
 *main - print all base 10 digits
 *
 *Return:0
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i != 57)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
			i++;
		}
	}
	putchar('\n');
	return (0);
}
