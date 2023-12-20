#include "main.h"

/**
* print_alphabet - Prints the lowercase alphabet followed by a newline
*/
void print_alphabet(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		_putchar(lower);
		lower++;
	}

	_putchar('\n');
}
