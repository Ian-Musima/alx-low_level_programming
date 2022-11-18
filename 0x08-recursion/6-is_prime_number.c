#include "main.h"

/**
 *is_prime_number - check if number is a prime number
 *@n: number to be evaluated
 *
 *Return:1 if prime or 0 if not
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n > 1)
		return (check_multiple(n, i));
	else
		return (0);
}

/**
 *check_multiple - calculate the multiples of a number
 *@n:number to be evaluated
 *@i:multiple to be checked
 *
 *Return:0 if n is even, 1 if n is prime
 */
int check_multiple(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (check_multiple(n, i + 1));
}
