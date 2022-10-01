#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the name of the programs
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0(success)
*/
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		while (i < argc)
		{
		printf("%s\n", argv[i]);
		i++;
		}
	return (0);
	}
}
