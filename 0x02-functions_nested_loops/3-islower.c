/*
 * File: 3-islower.c
 * Auth: Precious Bassey
 */

#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The cahracter to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
