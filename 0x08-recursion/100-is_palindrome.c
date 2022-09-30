#include "main.h"


/**
 * _lenght - length of a string
 * @s: the string whose length is to be determined
 * Return: string length
 */
int _lenght(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + lenght(s + 1));
}
/**
 * checkp - check if the string is a palindrome
 * @i: parameter
 * @l: the length of the string
 * @s: the string
 * Return: return 1 if the string is a palindrom, 0 if not
 */
int checkp(int i, int l, char *s)
{
if (l > 0)
{
if (s[i] == s[l])
{
return (checkp(i + 1, l - 1, s));
}
else if (s[i] != s[l])
{
return (0);
}
else
{
return (1);
}
}
return (1);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: pointer to the string
 * Return: return 1 i it is and 0 if not
 */
int is_palindrome(char *s)
{
	return (checkp(0, _lenght(s) - 1, s));
}
