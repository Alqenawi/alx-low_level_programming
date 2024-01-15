#include "main.h"

/**
* _strdup - Duplicates a string.
* @str: The string to duplicate.
*
* Return: A pointer to the duplicated string, or NULL
*/

char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
		return (NULL);

	duplicate = strdup(str);

	return (duplicate);
}
