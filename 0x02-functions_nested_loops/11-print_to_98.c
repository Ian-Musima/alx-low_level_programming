#include <stdio.h>

/**
 *print_to_98 - prints all natural numbers fro n to 98
 *@n: the starting number
 *
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d", n);
		printf(", ");
		n--;
	}
	while (n < 98)
	{
		printf("%d", n);
		printf(", ");
		n++;
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");

}
