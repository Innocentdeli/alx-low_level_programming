#include <stdio.h>
/**
 * main - Prints the sum of all multiples of 3 or 5 to 1024
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, k;
	int m;

	i = 0;
	j = 0;
	k = 0;

	for (m = 0; m < 1024; m++)
	{
		if ((m % 3) == 0)
		{
			i = i +  m;
		}
		else if ((m % 5) == 0)
		{
			j = j + m
		}
	}
	k = i + j;
	printf("%lu\n", z);
	return (0);
}
