#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates memory using malloc and free.
 * @ptr: Pointer to previously allocated memory.
 * @old_size: Size of the original allocation in bytes.
 * @new_size: New size for reallocation in bytes.
 *
 * This function reallocates memory for @ptr to @new_size.
 * It copies data from the old memory block to the new one, up to the
 *
 * Return: Pointer to the reallocated memory, or NULL on failure or
 * if new_size is zero and ptr is not NULL (freed).
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	size_t i, min_size;
	char *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));


	if (new_size == old_size)
		return (ptr);


	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/*
	 * Copy the old data to the new memory block,
	 * up to the minimum of old_size and new_size
	 */
	min_size = (old_size < new_size) ? old_size : new_size;
	for (i = 0; i < min_size; i++)
		new_ptr[i] = ((char *)ptr)[i];


	free(ptr);

	return (new_ptr);
}

