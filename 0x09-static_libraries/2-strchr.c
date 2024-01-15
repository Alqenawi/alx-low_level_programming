#include "main.h"

/**
* _strchr - Locates a character in a string.
* @s: Pointer to the string.
* @c: Character to locate.
*
* Return: A pointer to the first occurrence of the character c, or NULL
*/
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
