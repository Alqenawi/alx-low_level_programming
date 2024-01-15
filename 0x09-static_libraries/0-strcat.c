#include "main.h"

/**
* _strcat - Concatenates two strings
* @dest: The destination string
* @src: The source string to append
*
* Return: A pointer to the resulting concatenated string (dest)
*/

char *_strcat(char *dest, char *src)
{
	int ch1, ch2;

	ch1 = 0;

	while (dest[ch1])
		ch1++;

	for (ch2 = 0; src[ch2]; ch2++)
		dest[ch1++] = src[ch2];

	dest[ch1] = '\0';

	return (dest);
}
