#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * positive_or_negative - Print sign of a number
 * @i: The number to be check
 */
void positive_or_negative(int i);

/**
 * largest_number - Find the largest number among three integers.
 * @a: The first integer
 * @b: The second integer
 * @c: The third integer
 *
 * This function takes three integers as input and returns the largest
 * of the three.
 *
 * Return: The largest of the three integers.
 */
int largest_number(int a, int b, int c);

/**
 * largest_number - Calculate numbbers of days remaining to make a year
 * @month: The current month in a year
 * @day: The current day in a year
 * @year: The present year
 *
 * Return: The largest number
 */
void print_remaining_days(int month, int day, int year);

/**
 * convert_day - Convert any given month to day
 * @month: The present month
 * @day: The current day
 *
 * Return: The number of day
 */
int convert_day(int month, int day);
#endif
