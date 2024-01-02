#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
