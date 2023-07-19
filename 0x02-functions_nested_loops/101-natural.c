#include <stdio.h>
/**
 * main - Prints the sum of all multiples of 3 or 5 to 1024
 * Return: 0 (Success)
 */
int main(void)
{
	int sum;
	int i;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + i;
		}
	}
	printf("%f\n", sum);
}
