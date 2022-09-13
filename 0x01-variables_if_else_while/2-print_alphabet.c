#include <stdio.h>
/**
 * main -Entry Point
 *
 *Return: 0 (successful)
 */

int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
