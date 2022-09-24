#include "main.h"

/**
 * print_buffer - C function  prints the content
 * of an imnputed number of bytes
 *  print 10 bytes per line
 *  Each line starts with the position of the first byte
 * of the line in hexadecimal (8 chars), starting with 0
 *  If size is 0 or less, the output should be a new line only \n
 *  Each line starts with the position of the first byte of the line
 *  in hexadecimal (8 chars), starting with 0
 *  @b: number of bytes
 *  @size: size of the byte
 */
void print_buffer(char *b, int size)
{
	int k = 0, j;

	if (size < 0)
	{
		printf('\n');
		return;
	}
	while (k < size)
	{
		if (k % 10 == 0)
			printf("%08x: ", k);
		for (j = k; j < k + 9; j += 2)
		{
			if ((j < size) && ((j + 1) < size))
			printf("%02x%02x: ", b[j], b[j + 1]);
		}
		else
		{
			while (++j <= k + 10)
				printf(" ");
			printf(" ");
		}
		for (j = k; j < k + 9 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf('\n');
		k += 10;
	}
}
