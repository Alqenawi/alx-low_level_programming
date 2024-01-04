#include "main.h"

/**
* cap_string - integer is positive or negative
* @s: first integer
* Return: 0
*/

char *cap_string(char *s)
{
	int i;
	int cap = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (strchr(" \t\n,;.!?\"(){}", s[i]) != NULL)
		{
			cap = 1;
		}
		else if (cap)
		{
			s[i] = toupper(s[i]);
			cap = 0;
		}
	}
	return (s);
}
