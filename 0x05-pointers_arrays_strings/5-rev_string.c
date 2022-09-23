#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: print a string in reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	int byte = 0, flo = 0;
	char ch;	
	while (s[flo++])
		byte++;
	for (flo = byte - 1; flo >= byte / 2; flo--)
	{
		ch = s[flo];
		s[flo] = s[byte - flo - 1];
		s[byte - flo - 1] = ch;
	}
}
