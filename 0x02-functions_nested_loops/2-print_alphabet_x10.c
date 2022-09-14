#include "main.h"
/**
 *
 *print_alphabet_x10 - entry poinit
 *Declaration: prints 10 times the alphabet, in lowercase,
 * Return: Always 0.
 *
 */
int print_alphabet(void);
{
char c, i;
for (i = 0; i <=9; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
