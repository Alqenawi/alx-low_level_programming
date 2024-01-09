#include "main.h"

/**
* print_diagsums - Prints the sum of the diagonals of a square matrix.
* @a: Pointer to the square matrix.
* @size: Size of the square matrix.
*/

void print_diagsums(int *a, int size)
{
	int i, diag1_sum = 0, diag2_sum = 0;

	for (i = 0; i < size; i++)
	{
		diag1_sum += a[i * size + i];
		diag2_sum += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", diag1_sum, diag2_sum);
}
