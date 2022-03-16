/*
 * File: 1-alphabet.c
 * Auth: Precious Bassey
 */

#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');

	return (0);
}
