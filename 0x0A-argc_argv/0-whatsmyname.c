#include <stdio.h>

/**
* main - Entry point of the program
* @argc: The number of command-line arguments
* @argv: An array of strings containing the arguments
* Return: 0 on success, 1 on failure
*/
int main(int argc, char *argv[])
{
	if (argc > 0 && argv[0] != NULL)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	else
	{
		fprintf(stderr, "Unable to determine the program name.\n");
		return (1);
	}
}
