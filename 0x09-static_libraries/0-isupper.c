#include "main.h"

/**
* _isupper - function that checks for uppercase character
*
* @c: char to check if it is a upper case letter or not
*
* Return: 1 if c is in the range of 'A'-'Z', otherwise return (0);
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
