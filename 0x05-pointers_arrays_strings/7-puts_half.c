#include "main.h"
#include <stdio.h>

/**
 * puts_half - print a half of a tring
 * @str: The string to be printed
 *
 */
void puts_half(char *str)
{
	int byt = 0, flo = 0, n;

	while (str[byt++])
		flo++;
	if ((flo % 2) == 0)
		n = flo / 2;
	else
		n = (flo + 1) / 2;
	for (byt = n; byt < flo ; byt++)
		putchar(str[byt]);
	putchar('\n');
}
