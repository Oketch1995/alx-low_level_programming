#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int y = n;

	if (n < 0)
	{
		putchar('-');
		y = -y;
	}
	if ((y / 10) > 0)
		print_number(y / 10);
	putchar((y % 10) + '0');
}
