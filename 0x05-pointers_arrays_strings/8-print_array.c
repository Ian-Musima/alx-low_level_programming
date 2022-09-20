#include "main.h"
#include <stdio.h>

/**
 *print_array - print an array of integers
 *@a:array to be printed
 *@n:number of elements to be printed
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf(", %d", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
