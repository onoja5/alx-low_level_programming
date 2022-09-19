#include "main.h"

/**
 * swap_int - this function swap the value of two integers
 * @a: first integer pointer type
 * @b: second integer pointer type
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
