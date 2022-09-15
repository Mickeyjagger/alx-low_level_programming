#include"main.h"

/**
 * print_square - write a function that prints a square followed by a new line
 * @size: an input integer
 * Return: Always 0
 */
int print_square(int size)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
