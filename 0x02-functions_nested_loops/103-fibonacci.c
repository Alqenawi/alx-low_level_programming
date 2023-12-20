#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	float total;

	unsigned long first = 0, second = 1, next;

	while (1)
	{
		next = first + second;

		if (next > 4000000)
			break;

		if ((next % 2) == 0)
			total += next;

		first = second;
		second = next;
	}
	printf("%.0f\n", total);

	return (0);
}
