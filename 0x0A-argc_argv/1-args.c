#include "main.h"
#include <stdio.h>


/**
* main - Prints the name of the program
* @argc: Arguments count
* @argv: Argument
* Return: Always 0(success)
*/
int main(int argc, char *argv[])
{

	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
