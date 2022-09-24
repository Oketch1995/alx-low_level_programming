#include "main.h"
#include <stdio.h>

/**
 * rot13 - how to write a string
 * @y:string
 * Return: The encoded string
 */
char *rot13(char *y)
{
	int x = 0;

	while (y[x])
	{
		while ((y[x] >= 'a' && y[x] <= 'z') || (y[x] >= 'A' && y[x] <= 'Z'))
		{
			if ((y[x] > 'm' && y[x] <= 'z') || (y[x] > 'M' && y[x] <= 'Z'))
			{
				y[x] -= 13;
				break;
			}
			y[x] += 13;
			break;
		}
		x++;
	}
	return (y);
}


