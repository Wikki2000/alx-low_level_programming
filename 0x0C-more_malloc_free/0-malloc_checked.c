#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of memory to be allocated
 *
 * Return: Pointer to the allocated memory
 * on failure return NULL
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Error! Memory allocation failed\n");
		exit(98);
	}
	return (ptr);
}
