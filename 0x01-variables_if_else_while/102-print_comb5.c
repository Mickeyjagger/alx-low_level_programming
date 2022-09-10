#include <stdio.h>

/**
 * main - Prints 3 combination of numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int c, m, n, o;

	for (c = 40 ; c <= 50 ; c++)
	{
		for (m = 40 ; m <= 50 ; m++)
		{
			for (n = 40 ; n <= 50 ; n++)
			{
				for (o = 40 ; o <= 50 ; o++)
				{
					if (((n + o) > (c + m) && n >= c) || c < n)
					{
						putchar(c);
						putchar(m);
						putchar(' ');
						putchar(n);
						putchar(o);
					if (c + m + n + o == 227 && c == 50)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
