#include "main.h"

/**
 * print_triangle - print a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int alex, jero;

	if (size > 0)
	{
		for (alex = 1; alex <= size; alex++)
		{
			for ((jero = size - alex); jero > 0; jero--)
			{
				_putchar(' ');
			}
			for (jero = 0;  jero < alex; jero++)
			{
				putchar('#');
			}
				if (alex == size)
				{
					continue;
				}
				putchar('\n');
		}
	}
	putchar('\n');
}
