#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int dig1 = n;

	if (n < 0)
	{
		_putchar('-');
		dig1 = -dig1;
	}
	if ((dig1 / 10) > 0)
		print_number(dig1 / 10);
	_putchar((dig1 % 10) + '0');
}
