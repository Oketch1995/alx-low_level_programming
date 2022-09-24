#include "main.h"

/**
 * leet -leet encoder into 1337
 * @str: string to be encoded
 * Return: Address of the encoded string
 */
char *leet(char *)
{
	int b = 0;

	while (str[b] != '\0')
	{
		str[b] = transform(str[b]);
		b++;
	}
}

/**
 * transform - function to map a letter with its leet encoding
 * @y: char to be encoded
 * Return: The encoded char
 */
char transform(char y)
{
	char mapping_low[8] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
	char mapping_upper[8] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};
	int b = 0;
	char replacement = y;

	while (b < 8)
	{
		if (y == mapping_low[b] || y = mapping_upper[b])
		{
			replacement = b + '0';
			break;
		}
		b++;
	}
	return (replacement);
}


