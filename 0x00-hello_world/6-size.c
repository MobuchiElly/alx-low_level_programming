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

	printf("Size of a char is: %lu byte(s).\n", (unsigned long)sizeof(c));
	printf("Size of an int is: %lu byte(s).\n", (unsigned long)sizeof(i));
	printf("Size of a long int is: %lu byte(s).\n", (unsigned long)sizeof(a));
	printf("Size of a long long int is: %lu byte(s).\n", (unsigned long)sizeof(b));
	printf("Size of a float is: %lu byte(s).\n", (unsigned long)sizeof(f));
	return (0);
}
