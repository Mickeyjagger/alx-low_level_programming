#include <stdio.h>
/**
 * main - Prints a hexadecimal string
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	char low;

	for (d = '0' ; d <= '9' ; d++)
		putchar(d);
	for (low = 'a' ; low <= 'f' ; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
