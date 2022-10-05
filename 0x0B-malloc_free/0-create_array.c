#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char.
 * @size: size of an array
 * @c: char to initialize array with
 * Return: Return NULL when an error
 * or pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int k;

	if (size == 0)
	{
		return (0);
	}
	arr = malloc(sizeof(char) * size);

	/* check if malloc is successful or not */

	if (arr == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
	{
		arr[k] = c;
	}
	return (arr);
}
