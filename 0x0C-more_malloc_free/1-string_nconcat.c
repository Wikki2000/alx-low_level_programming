#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: Pointer to the memory address of the destination string
 * @s2: Pointer to the memory address of the source string
 * @n: Size of string to be concantenated
 *
 * Return: Pointer to resultant string
 * else return NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	ptr = (char *) malloc(len1 + n + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i]; /* Copy s1 to pointer of allocated memory */
	/* Concantenate the 1st n bytes of s2 to result */
	for (i = 0; i < n; i++)
		ptr[len1 + i] = s2[i]; /* Append result to end of s1 */
	ptr[len1 + n] = '\0';
	return (ptr);
}
