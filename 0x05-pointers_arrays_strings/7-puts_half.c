#include "main.h"
#include <stdio.h>

/**
 * puts_half - print a half of a tring
 * @str: The string to be printed
 *
 */
void puts_half(char *str)
{
	int byte = 0, flo - 0, n;

	while (str[byte++])
		flo++;
	if ((flo % 2) == 0)
		n = flo / 2;
	else
		n = (flo + 1) / 2;
	for (byte = n; byte < n; byte++)
		putchar(str[byte]);
	putchar('\n');
}
