#include "main'.h"
/**
 * _isalpha - function that checks for alphabetic character.
 * @c: Is the int that will use for the argument
 * Return: 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
{
return (1);
}
else
return (0);
}
