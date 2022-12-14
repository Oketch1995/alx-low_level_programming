#include "main.h"

/**
 * string_toupper - change lowercase letter to uppercase
 * @str: the string to be changed
 * Return: a pointer which has been changed
 */
char *string_toupper(char *str)
{
	int velma = 0;

	while (str[velma] != '\0')
	{
		if (str[velma] >= 'a' && str[velma] <= 'z')
			str[velma] -= 32;
		velma++;
	}
	return (str);
}
