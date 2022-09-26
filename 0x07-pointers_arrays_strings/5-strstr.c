#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: main string to be examined
 * @needle: searched in the main string
 * Return: return 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;
		while (*haystack != '\0' && *b != '\0' && *haystack == *b)
		{
			haystack++;
			b++;
		}
		if (*b == '\0')
			return (a);
		haystack = a + 1;
	}
	return (0);
}
