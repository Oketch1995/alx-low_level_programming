#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 * Return: NULL if str = NULL, pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *dest;
	int i, j;

	if (str == 0)
		return (NULL);
	for (i = 0; str[i]; i++)
		j++;
	dest = malloc(sizeof(char) * (j + 1));
	if (dest == 0)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		dest[i] = str[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
