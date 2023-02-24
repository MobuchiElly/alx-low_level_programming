#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the largest prime factor of 612852475143
 *
 * Return: always 0
 **/

int main(void)
{
	unsigned long int d, n = 612852475143;

	for (d = 3; d < 782849; d = d + 2)
	{
		while ((n % d == 0) && (n != d))
			n = n / d;
	}
	printf("%lu\n", n);
	return (0);
}
