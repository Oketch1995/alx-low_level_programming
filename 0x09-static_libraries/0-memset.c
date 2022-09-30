#include "main.h"

/**
 * _memset - fill the memory block with a constant byte.
 * @s: address to memory block
 * @b: char to be used
 * @n: number of bytes to be used
 * Return: pointer to the mory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}
