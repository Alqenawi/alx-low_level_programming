#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer.
 *
 * @y: The integer to extract the last digit from.
 *
 * Return: The last digit of y.
*/

int print_last_digit(int y)
{
	int z;

	if (y < 0)
		z = -1 * (y % 10);
	else
		z = y % 10;

	_putchar(z + '0');
	return (z);
}
