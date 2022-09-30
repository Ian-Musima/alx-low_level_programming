#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints number of arguements
 *pass into it
 *@argc: arguement counter
 *@argv: arguement vector
 *
 *Return: Always 0.
 */
int main(int argc,char *argv[])
{
	int mul;

	if ((argc - 1) == 2)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (0);
	}
	return (0);
}
