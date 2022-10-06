#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - count array
 * @s: the array of elements
 * Return: return 1
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0') /* count the character of the string */
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copy arrays
 * @src: source string
 * @dest: destination of the string
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * which contains a copy of the string given as a parameter
 * @str: array of elements
 * Return: a pointer
 */
char *_strdup(char *str)
{
	char *dest;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	dest = (char *) malloc(size * sizeof(char));

	if (dest = 0)
	{
		return (NULL);
	}
	_strcpy(dest, str);
	return (dest);
}
