#include "main.h"

/**
 *reverse_array - reverses the content of an array of
 *integers
 *@a:array to be reversed
 *@n:number of elements to reverse
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0; i < n ; i++)
	{
		for (j = 0; j < i; j++)
		{
			k = *(a + i);
			*(a + i) = *(a + j);
			*(a + j) = k;
		}
	}
}
