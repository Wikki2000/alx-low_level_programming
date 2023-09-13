#ifndef MAIN_H
#define MAIN_H

/**
 * main.h - Header file for the _putchar function.
 *
 * This header file contains the prototype for the _putchar function,
 * which is used to write a character 'c' to the standard output (stdout).
 *
 * @c: The character to be written.
 *
 * Return: On success, returns the character written as an int.
 * On failure, returns -1.
 */
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
#endif
