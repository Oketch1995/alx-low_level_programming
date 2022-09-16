#include <stdio.h>
/**
 * main -entry point
 *
 * description: ing the main function
 * print lowercase alphabet in reverse
 *
 * Return: Always 0 (success)
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
