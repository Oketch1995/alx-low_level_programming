#include "main.h"
#include <stdio.h>

/**
 * _puts - printing a string
 * @str: string to be used
 * Description: str is the string to be used
 * On success: returns no error
 *
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

