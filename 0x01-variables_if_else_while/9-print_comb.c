/*
 * File: 9-print_comb.c
 * Auth: Bassey Precious
 */

#include <stdio.h>

/**
 * main - Prints  all possible combinations od sindle-digit numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);

}
