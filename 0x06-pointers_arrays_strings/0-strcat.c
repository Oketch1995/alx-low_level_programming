#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @src: source of the string
 * @dest: destination of the string
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
