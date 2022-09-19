#include "main.h"

/**
 *times_table - prints the 9 times table, starting with 0
 *
 *Return: Always 0.
 */
void times_table(void)
{
	int i, j, answer;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			answer = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if (j == 0)
			{
				_putchar(answer + '0');
			}
			if (answer >= 10)
			{
				_putchar((answer / 10) + '0');
				_putchar((answer % 10) + '0');
			}
			else if (answer < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((answer % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
