#include "main.h"
/**
 * rot13 - function that encodes a string into rot13
 *
 * @s: string to encode
 *
 * Return: address of s
 */
char *rot13(char *s)
{
	Int d, i;
	char c[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char l[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (d = 0; *(s + d); d++)
	{
		for (i = 0; i < 52; i++)
		{
			if (c[i] == *(s + d))
			{
				*(s + d) = l[i];
				break;
			}
		}
	}
	return (s);
}
