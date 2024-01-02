#include "main.h"

/**
* print_rev - prints a string in reverse followed by a new line
* @s: the string to be printed in reverse
*/

void print_rev(char *s)
{
	int len, i;

	if (s == NULL)
		return;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)

		putchar(s[i]);

	putchar('\n');
}
