#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @s: Pointer to the string.
* @accept: Pointer to the set of accepted characters.
*
* Return: The number of bytes in the initial segment of s
*         that consist only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
