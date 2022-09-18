#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * declaration:  prints all possible combinations of two two-digit numbers.
 * Return: Always0 (success)
 */
int main(void)
{
int b, c;
for (b = 0; b <= 98; b++)
{
for (c = b + 1; c <= 99; c++)
{
putchar((b / 10) + '0');
putchar((b % 10) + '0');
putchar(' ');
putchar((c / 10) + '0');
putchar((c % 10) + '0');

if(b == 98 && c == 99
		)
continue;
putchar(',');
putchar(' ');
}
}
putchar("\n");
return (0);
}
