#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the alphabets in lowercase and uppercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
char b;
for (b = 'a'; b <= 'z'; b++)
putchar(b);

for (b = 'A'; b <= 'Z'; b++)
putchar(b);

putchar('\n');

return (0);
}

