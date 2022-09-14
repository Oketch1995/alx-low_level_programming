#include "main.h"
/**
 * main -  Entry point
 *
 * Description: function to check for a lowercase character
 *
 * gcc -Wall -pedantic -Werror -Wextra -std=gnu89
 *
 * Return: Always 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
