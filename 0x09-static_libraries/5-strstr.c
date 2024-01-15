#include "main.h"

/**
* _strstr - Locates a substring.
* @haystack: Pointer to the string to search in.
* @needle: Pointer to the substring to search for.
*
* Return: A pointer to the beginning of the located substring, or NULL if
*         the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
