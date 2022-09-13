#include <stdio.h>
/**
 * main -entry point
 *
 * description: ing the main function
 * print lowercase alphabet in reverse
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
