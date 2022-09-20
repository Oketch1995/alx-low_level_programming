#include "main.h"

/**
 * @s: print a string in reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	int lizy = 0;
	while (s[lizy] != '\0')
	{
		lizy++;
	}
	for (lizy -= 1; lizy >= 0; lizy--)
	{
		_putchar(s[lizy]);
	}
	_putchar('\n');
}
