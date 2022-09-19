#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string
 * @s: parameter
 * Return: returns length as an integer
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
