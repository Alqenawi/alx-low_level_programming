#include "main.h"

/**
* print_alphabet_x10 - Prints the lowercase alphabet 10 times with a newline
*/

void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)

	{
		char lower = 'a';

		while (lower <= 'z')
		{
		_putchar(lower);
		lower++;
		}

		_putchar('\n');
	}
}
