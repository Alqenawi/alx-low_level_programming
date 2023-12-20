#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int count;

	unsigned long first = 0, second = 1, next;

	for (count = 0; count < 50; count++)
	{
		next = first + second;
		printf("%lu", next);

		first = second;
		second = next;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
