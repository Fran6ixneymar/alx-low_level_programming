#include "main.h"

/**
 * get_bit - this returns the value of a bit at an index in a decimal number
 *
 * @n: the bit to be checked
 *
 * @index: the index of the bit
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int start;

	if (index > 63)
		return (-1);

	start = (n >> index) & 1;

	return (start);
}
