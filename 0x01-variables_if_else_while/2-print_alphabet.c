#include <stdio.h>
/**
 * main - Entry point
 * Description: printing alphabets starting from 'a' to 'z' in lowercase
 *followed by a new line
 *You can only use the putchar function
 * Return: Alwas successful
 */
int main(void)
{
char b;
for (b ='a'; b <= 'z');
b++;
putchar(b);
putchar('\n');
return (0);
}
