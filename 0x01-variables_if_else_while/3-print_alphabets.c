#include <stdio.h>

/**
 * main - The entry point
 *
 * Return: always 0 which means sucess
 */

int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');

	return (0);
}
