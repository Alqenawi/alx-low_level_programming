#include "main.h"

/**
* _strcmp - compares two strings
* @s1: the first string to compare
* @s2: the second string to compare
*
* Return: 0 if the strings are equal, a negative value if s1 is less than s2,
*         and a positive value if s1 is greater than s2
*/

int _strcmp(char *s1, char *s2)
{
	int final = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			final = ((int)*s1 - '0') - ((int)*s2 - '0');
			break;
		}
		s1++;
		s2++;
	}
	return (final);
}
