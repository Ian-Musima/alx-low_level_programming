#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive numbers
 *@argc: arguement counter
 *@argv: arguement vector
 *
 *Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int add = 0, i;

	if ((argc - 1) > 0)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
