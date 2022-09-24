#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int y;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	y = n;
	if (y / 10)
		print_number(y / 10);
}
