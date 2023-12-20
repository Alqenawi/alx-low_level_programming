#include <stdio.h>

/**
 * main - The entry point
 *
 * Return: always 0 which means success
 */

int main(void)
{
	int x = 0, y, z;

	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			z = 0;
			while (z <= 9)
			{
				if (x != y && x < y && y != z && y < z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');

					if (x != 7 || y != 8 || z != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
