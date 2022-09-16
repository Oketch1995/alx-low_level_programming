#include "main.h"

/**
 * print_triangle - print a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int alex, jero;

		for (alex = 1; alex <= size; alex++)
		{
			for (jero = 0; jero > size; jero++)
			{
				_putchar(' ');
			}
			for (jero = 1 : jero <= alex; jero++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
