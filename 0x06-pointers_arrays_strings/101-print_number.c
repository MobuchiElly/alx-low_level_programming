#include "main.h"
/**
  * print_number - function that prints any integer with putchar
  *
  * @n: number to be printed
  *
  * Return: void
  */

void print_number(int n)
{
	unsigned int i;

	i = n;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (i / 10)
		print_number(i / 10);

	_putchar(i % 10 + '0');
}
