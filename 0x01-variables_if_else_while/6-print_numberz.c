#include <stdio.h>

/**
 * main - The entry point
 *
 * Return: always 0 which means sucess
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');

	return (0);
}
