#include "main.h"
/**
 * print_sign - Checks if the input number is greater, less or equal
 * @n: The input number as an integer
 * Return: 1 is greater than the zero. 0 is zero. -1 is less than.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
