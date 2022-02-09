#include <stdio.h>

/**
 * main - aa
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{

		if (i % 3 == 0 && i % 5 == 0)
		{
			if (i == 100)
			{
				printf("FizzBuzz");
			}
			{
				printf("FizzBuzz ");
			}
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
