#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string
 * @s: parameter
 * Return: returns length as an integer
 */
int _strlen(char *s)
{
	int levy = 0;

	while (*(s + levy) != '\0')
		levy++;
	return (levy);
}
