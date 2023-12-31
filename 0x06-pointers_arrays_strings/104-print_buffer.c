#include "main.h"

/**
 * printableASCII - Checks if an ASCII value is printable.
 * @n: The ASCII value to check.
 *
 * Return: 1 if printable, 0 otherwise.
 */
int printableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHEX - Prints the hexadecimal values of bytes within a specified range.
 * @b: The buffer containing the bytes.
 * @start: The starting index of the range.
 * @end: The ending index of the range.
 */
void printHEX(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * prntASCII - Prints ASCII characters within a specified range.
 * @b: The buffer containing the bytes.
 * @start: The starting index of the range.
 * @end: The ending index of the range.
 */
void prntASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!printableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - Prints the content of a buffer.
 * @b: The buffer to be printed.
 * @size: The number of bytes to print from the buffer.
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHEX(b, start, end);
			prntASCII(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
