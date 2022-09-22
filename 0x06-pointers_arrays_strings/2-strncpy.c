#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: The destination of a string.
 * @src: The source of the string.
 * @n: parameter
 * Return: returns
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];
	for (; k < n; k++)
		dest[k] = '\0';
	return (dest);
}
