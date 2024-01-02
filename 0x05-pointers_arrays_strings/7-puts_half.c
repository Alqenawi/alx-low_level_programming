#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the input string
*/

void puts_half(char *str)
{
	int i, start, length;

	if (str == NULL)
		return;

	length = strlen(str);

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = ((length - 1) / 2) + 1;
	}

	for (i = start; i < length; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
