#include "main.h"

/**
 * rot13 - encodes a string using ROT13 cipher
 * @str: the input string
 *
 * Return: a pointer to the modified string
 */
char *rot13(char *str)
{
	char *input_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_chars = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; input_chars[j] != '\0'; j++)
		{
			if (str[i] == input_chars[j])
			{
				str[i] = rot13_chars[j];
				break;
			}
		}
	}

	return (str);
}
