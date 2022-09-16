#include "main.h"
#include <stdio.h>

/**
 * Fizz_Buzz - program that prints either number
 * or fizz, or buzz or fizzbuzz, 1 to 100
 * Return: 0
 */

void Fizz_Buzz(void)
{
	int m;
	for (m = 1; m <= 100; m++)
	{	
		if (m % 3 == 0 && m % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (m % 5 == 0 && m % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (m % 3 == 0 && m % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (m == 1)
		{
			printf("%d", m);
		}
		else
		{
			printf("%d", m);
		}
	}
	printf("\n");
	return (0);
}
