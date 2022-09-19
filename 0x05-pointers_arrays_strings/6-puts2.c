#include<stdio.h>
#include "main.h"

/**
 * puts2 - unction that prints every other character of a string
 * @str - string
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;
	while (*(str + 1) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
	i++;
	}
	putchar(10);
}
