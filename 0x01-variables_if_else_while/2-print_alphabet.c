#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry Point
 * Description: printing the alphabets 'a - z' in lowercase
 * return - 0 (successful)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
