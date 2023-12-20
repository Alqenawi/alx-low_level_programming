#include <stdio.h>

/**
 * main - The entry point
 *
 * Return: always 0 which means sucess
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x == 'e' || x == 'q')
			x++;
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
