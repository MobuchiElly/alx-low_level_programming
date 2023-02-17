#include <stdio.h>
/**
 * main - program that prints all alphabets in lowercase excluding two letters
 *
 * Return: 0
 */

int main(void)
{
	char b;

	b = 'a';
	while
		(b <= 'z') {
			if ((b != 'q' && b != 'e') && b <= 'z')
				putchar(b);
			b++;
		}
	putchar ('\n');
	return (0);
}
