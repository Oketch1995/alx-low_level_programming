#include "main.h"

/**
 * helperFunction - returns 1 or 0
 * @dig1: number being checked
 * @i: posible factor of the number
 * Return: 0 if not prime, 1 if prime
 */
int helperFunction(int dig1, int i)
{
	if (i < dig1)
	{
		if (dig1 % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(dig1, i, 1));
		}
		else
		{
			return (1);
		}
	}
}


/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number
 * otherwise return 0.
 * @n: number to be checked
 * Return: 0 if not prime and 1 if prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}
