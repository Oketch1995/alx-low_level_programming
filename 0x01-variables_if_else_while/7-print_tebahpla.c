#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -entry point
 *
 * description: printing lowercase alphabet in reverse
 *
 * return: always 0 (success)
 */
int main(void)
{
char s;
for (s = 'z'; s >= 'a'; s--)
{
putchar(s);
}
putchar('\n');
return (0);
}
