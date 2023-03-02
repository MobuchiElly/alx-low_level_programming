#include "main.h"
/**
 *string_toupper - change lowercase to uppercase
 *
 *@str: string
 *
 *Return: char
 */
char *string_toupper(char *str)
{
	char *c = str;

	while (*c != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
		*ptr = *ptr - 'a' + 'A';
		}
	c++;
	}
	return (str);
}
