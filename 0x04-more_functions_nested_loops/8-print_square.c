#include "main.h"

/**
* print_square - draws a square in the terminal
* @size: size of the square side length
*/

void print_square(int size)
{
	int l, w;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (w = 0; w < size; w++)
		{
			for (l = 0; l < size; l++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
