#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* is_digits - Check if a string contains only digits
* @str: The string to be checked
*
* Return: 1 if composed of digits, 0 otherwise
*/

int is_digits(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

/**
* multiply - multiplication of two positive numbers as strings
* @num1: The first positive number
* @num2: The second positive number
*/

void multiply(const char *num1, const char *num2)
{
	int len1, len2, resultLen, *result, i, j, product, sum;

	int startIndex = 0;

	len1 = strlen(num1);
	len2 = strlen(num2);
	resultLen = len1 + len2;

	result = (int *)calloc(resultLen, sizeof(int));

	if (result == NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0');
			sum = result[i + j + 1] + product;
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}

	while (startIndex < resultLen - 1 && result[startIndex] == 0)
		startIndex++;

	for (i = startIndex; i < resultLen; i++)
		printf("%d", result[i]);

	printf("\n");

	free(result);
}

/**
* main - Entry point of the program
* @argc: Number of command-line arguments
* @argv: Array of command-line argument strings
*
* Return: 0 on success, 98 on errors
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_digits(argv[1]) || !is_digits(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	multiply(argv[1], argv[2]);

	return (0);
}
