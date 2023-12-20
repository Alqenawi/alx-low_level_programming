#include "main.h"

/**
 * times_table - Prints a multiplication table from 0 to 9.
*/

void times_table(void)
{
	int x, mult, pro;

	for (x = 0; x <= 9; x++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			pro = x * mult;

			if (pro <= 9)
				_putchar(' ');
			else
				_putchar((pro / 10) + '0');
			_putchar((pro % 10) + '0');
		}
		_putchar('\n');
	}
}
