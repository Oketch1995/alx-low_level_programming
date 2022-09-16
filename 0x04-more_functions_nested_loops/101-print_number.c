#include "main.h"
#include <stdio.h>

/**
 * print_number - prints a number
 * @n: The number to print
 */

void print_number(int n)
{
	unsigned int y;

	y = n;
	if (n < 0)
	{
		_putchar(45);
		y = -n;
	}
	if (y / 10)
		print_number(y / 10);
	_putchar((y % 10) + '0');
}
