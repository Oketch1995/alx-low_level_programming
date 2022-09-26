#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -search a string for any of a set of bytes.
 * @s: source string
 * @accept: searching a string
 * Return: new string
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; *(accept + b); b++)
		{
			if (*(s + a) == *(accept + b))
			{
				break;
			}
		}
		if (*(accept + b) != '\0')
		{
			return (s + a);
		}
	}
	return (0);
}
