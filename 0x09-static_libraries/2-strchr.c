#include "main.h"

/**
 * _strchr - locates a character in a string searched
 * @s: the string to be searched
 * @c: the charr to be located
 * Return: if c is found, a pointer to the first occurence
 * if not found, return null
 */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (s + k);
	}
	return ('\0');
}
