#include "main.h"

/**
* print_to_98 - Prints a sequence of numbers from n to 98.
*
* @n: The starting integer.
*/
void print_to_98(int n)
{
	int go;

	if (n > 98)
	{
		for (go = n; go > 98; go--)
		{
			printf("%d, ", go);
		}
	}
	else
	{
		for (go = n; go < 98; go++)
		{
			printf("%d, ", go);
		}
	}

	printf("98\n");
}
