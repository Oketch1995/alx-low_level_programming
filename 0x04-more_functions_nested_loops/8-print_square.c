#include <stdio.h>
#include "main.h"

/**
 * print_square - print squares
 * @size: parameter
 * Return: Returns nothing
 */
void print_square(int size)
{
int velma, atieno;
if (size > 0)
{
for (velma = 0; velma < size; velma++)
{
for (atieno = 0; atieno < (size - 1); atieno++)
{
putchar('#');
}
putchar('#');
putchar('\n');
}
}
else
{
putchar('\n');
}
}
