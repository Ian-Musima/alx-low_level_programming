#include <stdio.h>

/**
 *main -"Fizz-Buzz-test"
 *
 *Return:0
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", "FizzBuzz");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
			continue;
		}
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}
