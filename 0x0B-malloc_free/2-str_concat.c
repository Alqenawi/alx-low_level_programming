#include "main.h"

/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: A pointer to the concatenated string, or NULL on failure.
*/

char *str_concat(char *s1, char *s2)
{
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	result = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
