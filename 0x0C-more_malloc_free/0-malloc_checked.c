#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocating memory using malloc
 * @b: number of byte to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

