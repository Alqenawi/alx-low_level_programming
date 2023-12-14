#include <unistd.h>

/**
 * main - is the Entry point
 *
 * Return: is Always 1 (Failure)
 */

int main(void)

{
	char qot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qot, 59);
	return (1);
}
