#include <stdio.h>
/**
 *main- printing the size of various types on the computers they are run
 *
 * Return: 0
 */
int main(void)
{
	double d;
	int i;
	char c;

	printf("The size of a double is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(c));
	return (0);
}
