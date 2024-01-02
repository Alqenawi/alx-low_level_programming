#include "main.h"

/**
* rev_string - prints a string forwards and backwards by a new line
* @s: the string to be printed
*/

void rev_string(char *s)
{
	int len, i;

	if (s == NULL)
		return;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)

	{
		char temp = s[i];

		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
