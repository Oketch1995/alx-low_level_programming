#include <stdlib.h>
#include "FUNCTION_POINTERS.H"

/**
* print_name - function that prints a name
*
* @name: string
*
* @f: function pointer
*
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
