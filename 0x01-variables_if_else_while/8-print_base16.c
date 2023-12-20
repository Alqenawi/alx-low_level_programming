#include <stdio.h>

/**
 * main - The entry point
 *
 * Return: always 0 which means sucess
 */

int main(void)
{
	int x = 48;

	while (x <= 102)
	{
		putchar(x);
		if (x == 57)
			x += 39;
		x++;
	}
	printf("\n");

	return (0);
}
