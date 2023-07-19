#include "main.h"
/**
 * print_last_digit - Prints the last digit
 * @n: input number as an integer.
 * Return: last digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + 0);
	return (l);
}
