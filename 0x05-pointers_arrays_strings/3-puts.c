#include "main.h"
#include <stdio.h>

/**
 * _puts - printing
 * @str - print a string
 * Description: print a string
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
	i++;
	}
	putchar(10);
}

