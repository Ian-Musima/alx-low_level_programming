#include "main.h"
#include <stdio.h>

/**
 *main - prints number of arguements
 *pass into it
 *@argc: arguement counter
 *@argv: arguement vector
 *
 *Return: Always 0.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);

}
