/*
 * File: 2-print_alphabet.c
 * Auth: Precious Bassey
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: ALways 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);

}
