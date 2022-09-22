#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: The destination of the string
 * @src: The source of the string
 * @n: the parameter
 * Return: Returns to the dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int maize = 0, h = 0;

	while (dest[mainze++])
		h++;
	for (maize = 0; src[maize] && maize < n; maize++)
		dest[h++] = src[maize];
	return (dest);
}

