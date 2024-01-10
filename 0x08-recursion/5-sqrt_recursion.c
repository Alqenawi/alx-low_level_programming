#include "main.h"

/**
* _sqrt_recursion - calculates the natural square root of a number
* @n: the number for which to find the square root
* @guess: the current guess for the square root
*
* Return: the natural square root of n, or -1
*/

int find_sqrt(int n, int guess);

int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}

/**
* find_sqrt - recursively finds the square root using binary search
* @n: the number for which to find the square root
* @guess: the current guess for the square root
*
* Return: the natural square root of n, or -1 if not found
*/

int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess < n)
		return (find_sqrt(n, guess + 1));
	else
		return (-1);
}
