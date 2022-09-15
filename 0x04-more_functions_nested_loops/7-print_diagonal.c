#include "main.h"

/**
 * print_diagonal - print a diagonal
 * @n: parameter
 * Return: Returns nothing
 */

void print_diagonal(int n)
{
int x, y;
if (n <= 0)
{
putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
for(y n = 0; y < x; y++)
{
putchar(32);
}
putchar(92);
putchar('\n');
}
}
}
