#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string
 * @s: The string whose lenth is to be determined
 * return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	while (s != '\0')
	{
		i++;
		return(1 + _strlen_recursion((s + i)));
	}
	else
	return (0);
}
