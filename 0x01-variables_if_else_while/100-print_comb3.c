#include <stdio.h>
#include <time.h>i
#include <stdlib.h>

/**
 * main - entry point
 * Description: print
 * Return: 0
 */
int main(void)
{
	int dig1, dig2;

	for (dig1 = 0; dig1 < 10; dig1++)
	{
		for (dig2 = dig1; dig2 < 10; dig2++)
		{
		if (dig1 < dig2)
		{

			prin_t(dig1);
			prin_t2(dig2);

			if (dig1 != 8 || (dig1 == 8 && dig2 != 9))
			{
				putchar(44);
				putchar(32);
			}
		}
		}
	}
	putchar('\n');
	return (0);
}
