#include "main.h"
/**
 * print_alphabet - a function that prints the alphablets, in lower case
 * followed by a new line
 * Return: nothing
 */
void print_alphabet(void)
{
	int lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		_putchar(lc);
	_putchar('\n');
}

