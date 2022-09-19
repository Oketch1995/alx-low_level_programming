#include <stdio.h>
#include "main.h"

/**
 * print_array -  function that prints n elements of an array of integers
 * @a: array
 * @b: number of elements
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int val;
	for (val = 0; val < n; val++)
	{
		if (val != n -1)
			printf("%d, ", a[val]);
		else
			printf("%d", a[val]);
	}
	putchar(10);
}
