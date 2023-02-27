#include "main.h"
/**
 * _strlen - function that returns the length of a string
 *
 * @s: char to be tested
 *
 * Description: this will return the length of a string
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int b = 0;

	while (*s != '\0')
	{
		s++;
		b++;
	}

	return (b);
}
