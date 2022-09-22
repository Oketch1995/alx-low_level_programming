#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers.
 * @a: the string to be reversed
 * @n: the number of elements in a string
 *
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (y = n - 1; y >= n / 2; y--)
	{
		x = a[n - 1 - y];
		a[n - 1 - y] = a[y];
		a[y] = x;
	}
}
