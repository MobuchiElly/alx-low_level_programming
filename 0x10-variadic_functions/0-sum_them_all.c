#include "variadic_functions.h"
/**
 * sum_them_all - function adds all the numbers
 * @n: number of parameters passed
 * Return: always returns 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list list;

	va_start(list, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
