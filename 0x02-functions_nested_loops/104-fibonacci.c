#include "main.h"

/**
* len - Calculates the number of digits in an integer.
* @x: The integer to count digits for.
*
* Return: The number of digits in the integer.
*/

int len(int x)
{
	int len = 0;

	if (!x)
		return (1);

	while (x)
	{
		x = x / 10;
		len += 1;
	}

	return (len);
}

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int count, init;

	unsigned long first = 1, second = 2, next, max = 1000000000;
	unsigned long firsto = 0, secondo = 0, nexto = 0;

	for (count = 1; count <= 98; count++)
	{
		if (firsto > 0)
			printf("%lu", firsto);
		init = len(max) - 1 - len(first);

		while (firsto > 0 && init > 0)
		{
			printf("%d", 0);
			init--;
		}

		printf("%lu", first);

		next = (first + second) % max;
		nexto = firsto + secondo + (first + second) / max;
		first = second;
		firsto = secondo;
		second = next;
		secondo = nexto;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
