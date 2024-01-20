#include "main.h"

/**
* _calloc - Allocates memory for an array
* @nmemb: Number of elements
* @size: Size of each element
*
* Return: A pointer to the allocated memory, or NULL if fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = calloc(nmemb, size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
