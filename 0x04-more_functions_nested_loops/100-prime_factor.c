#include <stdio.h>

/**
 * main - print the largest prime factor
 * of a number
 * Return: Returns 0
 */

int main(void)
{
long number = 612852475143;
int val;
while (val++ < number / 2)
{
if (number % val == 0)
{
number /= 2;
continue;
}
for (val = 3; val < number / 2; val += 2)
{
if (number % val == 0)
number /= val;
}
}
printf("%ld\n", number);
return (0);
}
