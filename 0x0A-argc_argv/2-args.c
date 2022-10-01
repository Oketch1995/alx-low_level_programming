#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the minimum number of coins to make change.
  * @argc: argument counter.
  * @argv: argument 
  * Return: return 1 if error, else return 0.
  */
int main(int argc, char *argv[])
{
	int change, k;

	change = 0;

	if (argc == 2)
	{
		k = atoi(argv[1]);
		if (k > 0)
		{
			for (; k >= 25; change++)
			{
				k = k - 25;
			}
			for (; k >= 10; change++)
			{
				k = k - 10;
			}
			for (; k >= 5; change++)
			{
				k = k - 5;
			}
			for (; k >= 2; change++)
			{
				k = k - 2;
			}
			for (; k >= 1; change++)
			{
				k = k - 1;
			}
		}
		printf("%d\n", change);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
