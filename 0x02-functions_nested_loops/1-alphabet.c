/*
 * File: 1-alphabet.c
 * Auth: Precious Bassey
 */

#include <stdio.h>

/*
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

}
void print_alphabet(void);

int main(void)
{
	print_alphabet();

	return (0);
}
