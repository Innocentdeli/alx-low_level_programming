#include <stdio.h>
/**
 * main - Program entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'c') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
