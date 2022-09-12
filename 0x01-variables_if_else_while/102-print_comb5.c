#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * declaration: 
 * prints all possible combinations of two two-digit numbers.
 * return: always0 (success)
 */
int b, c, d;
{
int b, c, d;
for (b = '0'; b <= 9; b++)
{
for (c = c+1; c <= 9; c++)
{
for (d = c+1; d <= 9; d++)
if ((c! = b)!=d)
{
putchar(b);
putchar(c);
putchar(d);
if(d=='7'&& p=='8')
continue;
putchar(',')
putchar('');
}
}
}
}
putchar('\n');
return (0);
}
