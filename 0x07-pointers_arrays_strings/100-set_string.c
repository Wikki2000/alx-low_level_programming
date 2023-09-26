#include "main.h"

/**
 * set_string - Set the value of a pointer to a char
 * @s: Pointer to a pointer to char (char **)
 * @to: Pointer to a char (char *)
 *
 * Description:
 * This function sets the value of the pointer to a char 's' to the value
 * pointed to by 'to'. In other words, it updates the pointer 's' to point to
 * the same memory location as 'to'.
 *
 * Return: None (void)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
