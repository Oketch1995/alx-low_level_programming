#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the alphabets in lowercase, the uppercase, followed by a new line
 *
 * Return: always 0 (success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z';)
letter++;
putchar(letter);

for (letter = 'A'; letter <= 'Z';)
letter++;
putchar(letter);

putchar('\n');

return (0);
}

