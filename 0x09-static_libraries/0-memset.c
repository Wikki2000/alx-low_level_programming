#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: Pointer to the memory area to fill
 * @b: The constant byte to fill with
 * @n: Number of bytes to fill
 *
 * Description:
 * This function fills the first 'n' bytes of the memory area pointed to by 's'
 * with the constant byte 'b'.
 *
 * Return: A pointer to the memory area 's'.
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (s);
}
