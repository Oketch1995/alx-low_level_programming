#include "main.h"

/**
 * print_triangle - print a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int j, k;

	if (size > 0)
	{
		for (j = 1; j <= size; j++)
		{
			for ((k = size - k); k > 0; k--)
			{
				_putchar(' ');
			}
			for (k = 0; k < j; k++)
			{
				putchar('#');
			}
				if (j == size)
				{
					continue;
				}
				putchar('\n');
		}
	}
	putchar('\n');
}
