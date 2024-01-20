#include "main.h"

/**
* array_range - Creates an array of integers from min to max (inclusive)
* @min: Minimum value
* @max: Maximum value
*
* Return: Pointer to the newly array, or NULL or if min > max
*/
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)

	{
		arr[i - min] = i;
	}

	return (arr);
}
