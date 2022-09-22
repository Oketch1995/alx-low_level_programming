#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings..
 * @dest: The destination of the string
 * @src: The source of the string
 * Return: Return to dest.
 */
char *_strcat(char *dest, char *src)
{
	int maize = 0;
	dest h = 0;

	while (dest[maize])
	{
		maize++;
	}
for (h = 0; src[h] != 0; h++)
{
	dest[maize] = src[h];
	maize++;
}
return (dest);
}
