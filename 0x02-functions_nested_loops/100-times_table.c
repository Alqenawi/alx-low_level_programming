#include "main.h"

/**
 * print_times_table - Prints a times table up to n.
 *
 * @n: The maximum value for the times table.
*/

void print_times_table(int n)
{
	int x, mult, pro;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; ++x)
		{
			_putchar('0');
			for (mult = 1; mult <= n; ++mult)
			{
				_putchar(',');
				_putchar(' ');

				pro = x * mult;

				if (pro <= 9)
					_putchar(' ');
				if (pro <= 99)
					_putchar(' ');

				if (pro >= 100)
				{
					_putchar((pro / 100) + '0');
					_putchar((pro / 10) % 10 + '0');
				} else if (pro <= 99 && pro >= 10)
					_putchar((pro / 10) + '0');
				_putchar((pro % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
