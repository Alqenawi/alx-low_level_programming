#include "main.h"

/**
* _strncpy - copies n characters from source to destination
* @dest: the destination string
* @src: the source string
* @n: the maximum number of characters to copy
*
* Return: a pointer to the destination string (dest)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
