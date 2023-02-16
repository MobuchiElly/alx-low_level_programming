#include <stdio.h>
/**
 *main- printing the size of various types on the computers they are run
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a long int is: %lu.\n", (unsigned long)sizeof(a));
	printf("The size of a long long int is: %lu.\n", (unsigned long)sizeof(b));
	printf("The size of a float is: %lu.\n", (unsigned long)sizeof(f));
	return (0);
}
