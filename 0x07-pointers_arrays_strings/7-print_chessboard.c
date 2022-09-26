#include "main.h"

/**
 * print_chessboard -  prints the chessboard.
 * @a: The chessboard to be printed
 */
void print_chessboard(char (*a)[8])
{
	int j, k;

	for (j = 0; a[j][7]; j++)
	{
		for (k = 0; k < 8; k++)
			_putchar(s[j][k]);
		_putchar('\n');
	}
}
