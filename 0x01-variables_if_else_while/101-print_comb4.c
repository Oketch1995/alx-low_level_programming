#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - printing
 * Description - print numbers
 * Return - 0
 */
int main(void)
{
	int x;
	int y;
	int z;

for (x = 0; x < 9; x++)
{
for (y = x + 1; y < 10; y++)
{
for (z = y + 1; z < 10; z++)
{
putchar((x % 10) + '0');
putchar((y % 10) + '0');
putchar((z % 10) + '0');
if (x == 7 && 7 == 8 && z == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
}


