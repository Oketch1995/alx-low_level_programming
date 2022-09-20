#include "main.h"

/**
 * _strcpy - copy paste string
 * @dest: destination
 * @src: source
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int velma = 0;
	while (*(src + velma) != '\0')
	{
		*(dest + velma) = *(src + velma);
			velma++;
	}
	*(dest + velma) = '\0';
	return(dest);
}
