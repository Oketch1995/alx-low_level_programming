#include <stdio.h>

/**
 * main - prints the sizeof many var types
 *
 * Return: Always 0 (successful)
 */
int main(void)
{
	 printf("sizeof a char: %ld byte(s)\n", sizeof(char));
	 printf("sizeof an int: %ld bythe(s)\n", sizeof(int));
	 printf("sizeof a long int: %ld byte(s)\n",sizeof(long int));
	 printf("sizeof a long long int: %ld byte(s)\n",sizeof(long long int));
	 printf("sizeof a(float): %ld byte(s)\n", sizeof(float));
	 return (0);
}
