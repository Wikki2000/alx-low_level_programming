#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: Pointer to the input string
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = length - 1;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}


	/* Swap characters from start and end positions */
	while (start < end)
	{
		/* Swap characters using a temporary variable */
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/*  Move the pointers inward */
		start++;
		end--;
	}
}
