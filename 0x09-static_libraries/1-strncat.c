/**
* _strncat - Concatenates two strings, limiting to n characters from src
* @dest: The destination string
* @src: The source string to append
* @n: The maximum number of characters to append
*
* Return: A pointer to the resulting concatenated string (dest)
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len])
		dest_len++;

	while (src[i] && i < n)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
