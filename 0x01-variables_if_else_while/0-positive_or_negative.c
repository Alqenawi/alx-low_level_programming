#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - The entry point
 *
 * Return: always 0 which means sucess
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%i is positive\n", n);
else if (n < 0)
	printf("%i is negative\n", n);
else
	printf("%i is zero\n", n);
return (0);
}
