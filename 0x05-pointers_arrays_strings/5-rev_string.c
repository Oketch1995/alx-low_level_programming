#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: print a string in reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	int k = 0, h = 0;
	char ch;

	while (s[h++])
		k++;
		for (h = k - 1; h >= k / 2; h--)
	{
		ch = s[h];
		s[h] = s[k - h - 1];
		s[k - h - 1] = ch;
	}
}
