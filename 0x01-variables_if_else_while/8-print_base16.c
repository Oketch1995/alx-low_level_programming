#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main entry
 *
 * Description: prints all the numbers of base 16 in lowercase,
 *
 * return: 0 (success)
 */
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
