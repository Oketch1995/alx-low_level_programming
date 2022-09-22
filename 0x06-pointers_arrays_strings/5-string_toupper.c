#include "main.h"

/**
 * string_toupper - lowercase letter to uppercase
 * @str: the string to be changed
 * Return: a pointer which has been changed
 */
char *string_toupper(char *str)
{
	int Velma = 0;

	while (str[velma])
	{
		if (str[velma] >= 'a' && str[velma] <= 'z')
			str[velma] -= 32;
	}
	velma++;
	return (str);
}


