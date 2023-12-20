#include <stdio.h>

/**
 * main - The entry point
 *
 * Return: always 0 which means sucess
 */

int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');

	return (0);
}
