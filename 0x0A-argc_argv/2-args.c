#include "main.h"
/**
 * main - a program that prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always success
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
		printf("%s\n", argv[k]);
	return (0);
}
