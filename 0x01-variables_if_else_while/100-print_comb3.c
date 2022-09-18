#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: print
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 9; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');
					if (x == 8 && y == 9)
					continue;
					putchar(',');
					putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
