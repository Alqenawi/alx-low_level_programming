#include "main.h"

/**
* _islower - function that checks for lowercase character
*
* @c: char to check if it is a lower case letter or not
*
* Return: 1 if c is in the range of 'a'-'z', otherwise return (0);
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
