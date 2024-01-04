#include <stdio.h>

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number string.
 * @n2: The second number string.
 * @r: The buffer to store the result.
 * @size_r: The size of the result buffer.
 *
 * Return: A pointer to the result string or 0 if the result doesn't fit.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int index_r = 0;
	int len_n1 = 0;
	int len_n2 = 0;
	int digit1, digit2, sum, start, end;
	char temp;

	while (n1[len_n1] != '\0')
		len_n1++;
	while (n2[len_n2] != '\0')
		len_n2++;
	if (len_n1 > size_r - 2 || len_n2 > size_r - 2)
		return (0);
	while (len_n1 > 0 || len_n2 > 0 || carry)
	{
		digit1 = (len_n1 > 0) ? (n1[len_n1 - 1] - '0') : 0;
		digit2 = (len_n2 > 0) ? (n2[len_n2 - 1] - '0') : 0;
		sum = digit1 + digit2 + carry;

		carry = sum / 10;
		r[index_r++] = (sum % 10) + '0';
		len_n1--;
		len_n2--;
	}
	r[index_r] = '\0';
	start = 0;
	end = index_r - 1;
	while (start < end)
	{
		temp = r[start];
		r[start] = r[end];
		r[end] = temp;
		start++;
		end--;
	}
	return (r);
}
