#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes from memory area to be copied
 * Return: memory area replaced.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];
	return (dest);
}
