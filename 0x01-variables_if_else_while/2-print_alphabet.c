#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: printing alphabets starting from 'a' to 'z' in lowercase
 *followed by a new line
 *You can only use the putchar function
 * Return: Always 0 (successful)
 */
int main(void)
{
char b;
for (b = 'a'; b <= 'z';)
b++;
;putchar(b)
putchar('\n');
return (0);
}
