#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 *
 * Return: void
 */


void print_line(int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
