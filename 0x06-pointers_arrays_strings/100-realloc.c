#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return NULL;
	}

	if (ptr == NULL)
		return malloc(new_size);


	if (new_size == old_size)
		return ptr;


	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return NULL;


	if (old_size < new_size)
		memcpy(new_ptr, ptr, old_size);
	else 
		memcpy(new_ptr, ptr, new_size);


	free(ptr);

	return (new_ptr);
}

