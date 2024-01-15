#include "main.h"

/**
* argstostr - Concatenates all the arguments of the program.
* @ac: The number of arguments.
* @av: An array of strings containing the arguments.
*
* Return: A pointer to the concatenated string, or NULL if it fails.
*/

char *argstostr(int ac, char **av)
{
	int position = 0, i;
	int total_length = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);



	for (i = 0; i < ac; i++)

	{
		if (av[i] != NULL)
			total_length += strlen(av[i]) + 1;
	}

	result = (char *)malloc(total_length + 1);

	if (result == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			strcpy(result + position, av[i]);
			position += strlen(av[i]);
			result[position] = '\n';
			position++;
		}
	}

	result[position] = '\0';

	return (result);
}
