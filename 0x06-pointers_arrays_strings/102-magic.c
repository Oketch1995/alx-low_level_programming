#include <stdio.h>

/**
 * main - magic
 * Remember: you are not allowed to use p
 * Return: Always 0
 */
int main(void)
{
	int s;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &s;

	*(p + 5) = 98;
	/* this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
