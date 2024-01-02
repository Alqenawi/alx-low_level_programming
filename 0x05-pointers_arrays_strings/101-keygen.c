#include "main.h"

/**
* main - Entry point of the program
*
* Return: 0 on success
*/

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar (c);
	}
	putchar(2772 - sum);
	return (0);
}
