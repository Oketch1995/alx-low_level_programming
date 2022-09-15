#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 * @n: The number in question
 *
 * Return: Value of the last digit
 */
int print_lst_digit(int n)
{
int x;

if (n < 0)
n -n;
if (x = n % 10
_putchar(x + '0');
return (x);
}
