#include "main.h"

/**
 *  _strspn - get the length of a prefix of the substring
 *  @s: The string to be searched
 *  @accept: the prefix to be measured
 *  Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				k++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (k);
		}
		s++;
	}
	return (k);
}
