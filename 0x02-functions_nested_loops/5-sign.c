#include "main.h"
/**
 * print_sign -entry poin
 * Description :check for alphabet characters
 * Return: Alway 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar(0);
return (0);
}
}
