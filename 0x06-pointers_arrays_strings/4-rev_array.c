#include "main.h"

/**
* reverse_array - reverses the elements of an integer array
* @a: the integer array
* @n: the number of elements in the array
*/

void reverse_array(int *a, int n)
{
	int x, y, z;

	for (x = 0, y = (n - 1); x < y; x++, y--)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;
	}
}
