#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocate and initialize memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory, or NULL if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	size_t i;
	void *ptr = malloc(total_size);
	unsigned char *char_ptr = (unsigned char *)ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * sizeof(char);

	if (ptr == NULL)
		return (NULL);


	for (i = 0; i < total_size; i++)
		char_ptr[i] = 0;

	return (ptr);
}

