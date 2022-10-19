#include "math.h"
/**
 * print_last_digit - prints the last digit of the given vakue
 * @value: the given value
 * Return: returns 0 if succcessful 1 if otherwise
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
