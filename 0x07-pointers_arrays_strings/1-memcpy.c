#include "main.h"

/**
 * _memcpy - copy memiory area
 * @dest: dest memory area
 * @src: source memory area
 * @n: bytes from memory area to copy
 * Return: memory area replaced.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	unsigned char *destination = dest;
	unsigned char *source = src;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k]
	}
	return (dest);
}
