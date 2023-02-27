#include "main.h"
/**
* swap_int - function that swaps the value of int a and int b
*
* @a: first int
*
* @b: second int
*
* Return 0
*/
void swap_int(int *a, int *b)
{
		int test;

		test = *a;
		*a = *b;
		*b = test;
}
