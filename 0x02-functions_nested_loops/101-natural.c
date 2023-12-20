#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int total, x;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
			total += x;
	}
	printf("%d\n", total);

	return (0);
}
