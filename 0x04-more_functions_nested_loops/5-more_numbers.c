#include "main.h"

/**
* more_numbers - prints the numbers, from 0 to 14
*/

void more_numbers(void)
{
	int x, y, z;

	for (y = 0; y <= 9; y++)
	{
		for (z = 0; z <= 14; z++)
		{
			x = z;
			if (z > 9)
			{
				_putchar(1 + '0');
				x = z % 10;
			}
			_putchar(x + '0');
		}
		_putchar('\n');
	}
}
