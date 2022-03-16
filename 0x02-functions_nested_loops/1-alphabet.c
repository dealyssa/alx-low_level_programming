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
	print_alphabet();
	{
		char letter;
		
		for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
