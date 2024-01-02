#include "main.h"

/**
* puts2 - prints every other character of a string
* @str: the input string
*/

void puts2(char *str)
{
	int i;

	if (str == NULL)
		return;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}

	putchar('\n');
}
