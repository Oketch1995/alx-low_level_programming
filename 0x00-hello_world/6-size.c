#include <stdio.h>
/**
 * main - prints the sizeof many var types
 *
 * Return: Always 0 (successful)
 */
int main(void)
{
	 char a;
	 int b;
	 long int c;
	 long long int d;
	 float e;

	 printif("size of a char: %d byte(s)\n" sizeof(a));
	 printf("size of an int: %d bythe(s)\n" sizeof(b));
	 printf("size of a long int: %d byte(s)\n"sizeof(c));
	 printf("size of a long long int: %d byte(s)\n"sizeof(d));
	 printf(size of a floa: %d byte(s)\n" sizeof(e));
	 return (0);
}
