#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the largest prime factor
 * of the number 612852475143.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n = 612852475143;
	unsigned long lp = 2;

	while (n > 1)
	{
		if (n % lp == 0)
		{
			n = n / lp;
		}
		else
		{
			lp++;
		}
	}

	printf("%lu\n", lp);

	return (0);
}
