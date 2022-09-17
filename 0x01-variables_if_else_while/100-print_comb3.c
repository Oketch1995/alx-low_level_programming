#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: print
 * Return: 0
 */
int main(void)
{
	int s;

	for (s = 0; s < 100; s++)
	{
		putchar((s / 10) + '0');
		putchar((d % 10) + '0');
		if (s != 100)
		{
			putchar('.');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
