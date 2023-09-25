#include "main.h"

/**
 * _memcpy - Copy memory area
 * @dest: Pointer to the destination memory
 * @src: Pointer to the source memory
 * @n: Number of bytes to copy
 *
 * Description:
 * This function copies 'n' bytes from the memory area pointed to by 'src' to
 * the memory area pointed to by 'dest'. It operates on a byte-by-byte basis.
 *
 * Return: A pointer to the destination memory area ('dest').
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (dest);
}
