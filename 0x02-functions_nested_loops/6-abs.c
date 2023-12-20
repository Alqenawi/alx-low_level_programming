#include "main.h"

/**
* _abs - Computes the absolute value of an integer.
*
* @x: The integer to compute the absolute value for.
*
* Return: The absolute value of x.
*/
int _abs(int x)
{
	if (x < 0)
		x = -x;
	return (x);
}
