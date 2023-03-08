#include "main.h"
/**
 * is_prime_number - states if number is prime
 *
 * @n: int
 *
 * @i: int
 *
 * Return: int
 */

int is_prime_number(int n)
{
	int i;

	if (n < 2)
	{
		return (0);
	}
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
		return (1);
}
