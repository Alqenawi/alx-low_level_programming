#include "main.h"

/**
* _isdigit - function that checks for digits
*
* @c: char to check if it is a digit or not
*
* Return: 1 if c is in the range of '0'-'9', otherwise return (0);
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
