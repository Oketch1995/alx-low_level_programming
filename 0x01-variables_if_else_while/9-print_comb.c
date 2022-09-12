#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: prints all possible combinations of single-digit numbers.
 *this program prints 1 upto 9
 * return: 0 (success)
 */
int main(void)
{
int c;
for (c = 48; c <= 57; c++)
{
putchar(c);
}
if (c != 57)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

